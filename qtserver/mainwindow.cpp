#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL","my_sql_db");
    db.setHostName("remotemysql.com");
    db.setUserName("GaZL22lGP6");
    db.setPassword("X5QBXJILeg");
    db.setDatabaseName("GaZL22lGP6");
    if(db.open())
    {
        QMessageBox::information(this,"Connection", "Database connected successfully");
    }
    else {
        QMessageBox::information(this, "Not Connected", "Database not connected");
    }
}
