#include "database.h"
#include <sqlite3.h>
#include <iostream>

using namespace std;

// Function to create the database table
void createTable() {
    sqlite3* db;
    char* errMsg = nullptr;
    int rc = sqlite3_open("resumes.db", &db);

    if (rc) {
        cerr << "Error opening database: " << sqlite3_errmsg(db) << endl;
        return;
    }

    string sql = "CREATE TABLE IF NOT EXISTS Resumes ("
                 "ID INTEGER PRIMARY KEY AUTOINCREMENT, "
                 "Name TEXT, "
                 "Score INTEGER);";

    rc = sqlite3_exec(db, sql.c_str(), nullptr, nullptr, &errMsg);

    if (rc != SQLITE_OK) {
        cerr << "SQL error: " << errMsg << endl;
        sqlite3_free(errMsg);
    }

    sqlite3_close(db);
}

// Function to insert resume data into the database
void insertResumeData(const string& name, int score) {
    sqlite3* db;
    sqlite3_open("resumes.db", &db);

    string sql = "INSERT INTO Resumes (Name, Score) VALUES ('" + name + "', " + to_string(score) + ");";
    sqlite3_exec(db, sql.c_str(), nullptr, nullptr, nullptr);

    sqlite3_close(db);
}
