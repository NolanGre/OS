#include "calculator.h"

int main(void) {
    PGconn* conn = connect_calculator();
    if (conn == NULL)
        return EXIT_FAILURE;

   ExecStatusType remove_status = remove_calculator(conn);
    if (remove_status != PGRES_COMMAND_OK) {
        fprintf(stderr, "Deleting calculator failed.\n");
        PQfinish(conn);
        return EXIT_FAILURE;
    }

    ExecStatusType add_status = add_calculator(conn);
    if (add_status != PGRES_COMMAND_OK) {
        fprintf(stderr, "Adding calculator failed.\n");
        PQfinish(conn);
        return EXIT_FAILURE;
    }

    ExecStatusType get_status = get_calculator(conn);
    if (get_status != PGRES_COMMAND_OK) {
        fprintf(stderr, "Getting calculator failed.\n");
        PQfinish(conn);
        return EXIT_FAILURE;
    }

    PQfinish(conn);
   return EXIT_SUCCESS;
}
