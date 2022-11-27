#include "mainwindow.h"
//#include "./ui_mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString str_1 = "Hello";
    qDebug() << str_1;

}

MainWindow::~MainWindow()
{
    delete ui;
}

