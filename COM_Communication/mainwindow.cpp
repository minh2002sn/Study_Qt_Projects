#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QSerialPort>
#include "MyLibs/CRC/checksum.h"

QSerialPort *serial_port;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->btn_send, SIGNAL(clicked()), this, SLOT(com_tx()));

    serial_port = new QSerialPort(this);
    serial_port->setPortName("COM1");
    serial_port->setBaudRate(QSerialPort::Baud9600);
    serial_port->setDataBits(QSerialPort::Data8);
    serial_port->setParity(QSerialPort::NoParity);
    serial_port->setStopBits(QSerialPort::OneStop);

    serial_port->open(QIODevice::ReadWrite);

    connect(serial_port, SIGNAL(readyRead()), this, SLOT(com_rx()));
}

MainWindow::~MainWindow()
{
    delete ui;
    serial_port->close();
}

void MainWindow::com_tx()
{
    serial_port->write(ui->le_tx_data->text().toStdString().data());
}

void MainWindow::com_rx(){
    ui->pte_rx_data->moveCursor(QTextCursor::End);
    ui->pte_rx_data->insertPlainText(serial_port->readAll());
}
