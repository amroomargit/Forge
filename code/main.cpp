#include "mainwindow.h"
#include <QApplication>

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>


//database initialization
void initializeDatabase(){
    // open/create database file in project directory
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("users.db");

    if(!db.open()){
        qDebug() << "Failed to connect to the database:" << db.lastError().text();
        return;
    }

    // Create users table if non-existent
    QSqlQuery query;
    query.exec("CREATE TABLE IF NOT EXISTS users ("
               "id INTEGER PRIMARY KEY AUTOINCREMENT,"
               "name TEXT NOT NULL,"
               "password TEXT NOT NULL,"
               "hint TEXT,"
               "height REAL NOT NULL,"
               "weight REAL NOT NULL,"
               "caloric_intake INTEGER NOT NULL,"
               "height_unit TEXT NOT NULL,"
               "weight_unit TEXT NOT NULL"
               ");");

    //create templates table
    query.exec("CREATE TABLE IF NOT EXISTS templates ("
                    "template_id INTEGER PRIMARY KEY AUTOINCREMENT,"
                    "user_id INTEGER NOT NULL,"
                    "template_name TEXT NOT NULL,"
                    "creation_date DATETIME DEFAULT CURRENT_TIMESTAMP,"
                    "FOREIGN KEY (user_id) REFERENCES users(id) ON DELETE CASCADE"
                    ");");

    //create template_exercises table
    query.exec("CREATE TABLE IF NOT EXISTS template_exercises ("
               "exercise_id INTEGER PRIMARY KEY AUTOINCREMENT,"
               "template_id INTEGER NOT NULL,"
               "exercise_name TEXT NOT NULL,"
               "sets INTEGER DEFAULT 0,"
               "reps INTEGER DEFAULT 0,"
               "weight REAL DEFAULT 0.0,"
               "FOREIGN KEY (template_id) REFERENCES templates(template_id) ON DELETE CASCADE"
               ");");
}


//run program
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Database initialization
    initializeDatabase();

    MainWindow w;
    w.show();
    return a.exec();
}

/*
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
*/
