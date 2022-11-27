#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->btn_exit, SIGNAL(clicked()), this, SLOT(close()));

    connect(ui->btn_say_hello, SIGNAL(clicked()), this, SLOT(display_text()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::display_text()
{
    ui->lbl_display->setText("Hello World !!!");
}
