#include "calculator.h"

PGconn* connect_calculator(void) {
    PGconn* conn;
    char db_name[] = "sverdan";
    char user_name[] = "sverdan";

    conn = PQsetdbLogin(NULL, NULL, NULL, NULL, db_name, user_name, NULL);
    if (PQstatus(conn) == CONNECTION_OK) {
        printf("Connection to database %s is successful!\n", db_name);
        return conn;
    } else {
        fprintf(stderr, "Connection to database %s failed: %s\n", db_name, PQerrorMessage(conn));
        PQfinish(conn);
        return NULL;
    }
}
