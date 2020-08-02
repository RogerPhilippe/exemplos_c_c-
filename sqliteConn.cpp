#include <iostream>
#include <new>
#include <string>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "sqlite3/sqlite3.h"

static int callback(void *data, int argc, char **argv, char **azColName);

using namespace std;

int main() {

    // Reference: https://www.tutorialspoint.com/sqlite/sqlite_c_cpp.htm

   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;
   char *sql;
   const char* data = "Callback function called";

    rc = sqlite3_open("example.db", &db);

    if (rc) {
        cout << "Erro!" << endl;
    } else {
        cout << "Conectado" << endl;
    }

    sql = strdup("SELECT * FROM table_1");

    rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);

    if ( rc != SQLITE_OK) {
        cout << "SQL error: " << zErrMsg << endl;
        sqlite3_free(zErrMsg);
    } else {
        cout << "Operation done!" << endl;
    }

    sqlite3_close(db);

    return 0;
}

static int callback(void *data, int argc, char **argv, char **azColName) {
   int i;
   fprintf(stderr, "%s: ", (const char*)data);

   cout << endl;

   cout << "Quantidade dados: " << sizeof(argv)/sizeof(argv[0]) << endl;
   
   for(i = 0; i<argc; i++){
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   
   printf("\n");
   return 0;
}