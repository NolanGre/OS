#include <stdio.h>
#include <stdlib.h>
#include "libpq-fe.h"

PGconn* connect_calculator (void);
ExecStatusType remove_calculator(PGconn* conn);
ExecStatusType add_calculator(PGconn* conn);
ExecStatusType get_calculator(PGconn* conn);
