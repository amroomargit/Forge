#include "mainwindow.h"
#include <QApplication>

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>

//#include "weightlifttemplate.h"

//database initialization
void initializeDatabase(){
    // open/create database file in project directory
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("users.db");

    if(!db.open()){
        qDebug() << "Failed to connect to the database:" << db.lastError().text();
        return;
    }

    // Create users table if non-existent (this table stores users and their login info)
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

    //create templates table (this table stores each template name under a specific user)
    query.exec("CREATE TABLE IF NOT EXISTS templates ("
                    "template_id INTEGER PRIMARY KEY AUTOINCREMENT,"
                    "user_id INTEGER NOT NULL,"
                    "template_name TEXT NOT NULL,"
                    "template_type TEXT NOT NULL," //weightlifting or cardio
                    "creation_date DATETIME DEFAULT CURRENT_TIMESTAMP,"
                    "FOREIGN KEY (user_id) REFERENCES users(id) ON DELETE CASCADE"
                    ");"); //cascade deletion, if a user is deleted from the users table above, all their templates are deleted in a cascading effect

    //create template_exercises table (this table stores the workouts in a template, under it's respective template, under it's respective user)
    query.exec("CREATE TABLE IF NOT EXISTS template_exercises ("
               "exercise_id INTEGER PRIMARY KEY AUTOINCREMENT,"
               "template_id INTEGER NOT NULL,"
               "exercise_name TEXT NOT NULL,"
               "sets INTEGER DEFAULT 0,"
               "reps INTEGER DEFAULT 0,"
               "weight REAL DEFAULT 0.0,"
               "weight_unit TEXT NOT NULL,"
               "FOREIGN KEY (template_id) REFERENCES templates(template_id) ON DELETE CASCADE"
               ");");
    //cascade deletion, if a user is deleted from the users table above, all exercises associated with their templates are deleted in a cascading effect

    //create all_weightlifting_exercises table (this table will hold all the exercises for weightlifting)
    query.exec("CREATE TABLE IF NOT EXISTS all_weightlifting_exercises ("
               "id INTEGER PRIMARY KEY AUTOINCREMENT,"
               "exercise_name TEXT NOT NULL"
               ");");

    //create all_cardio_exercises table (this table will hold all the exercises for cardio)
    query.exec("CREATE TABLE IF NOT EXISTS all_cardio_exercises ("
               "id INTEGER PRIMARY KEY AUTOINCREMENT,"
               "exercise_name TEXT NOT NULL"
               ");");
}


//run program
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Database initialization
    initializeDatabase();

    //WeightliftTemplate w;
    MainWindow w;
    w.show();
    return a.exec();
}

