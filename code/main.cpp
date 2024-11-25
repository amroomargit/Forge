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

    // Create "users" table if non-existent
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
