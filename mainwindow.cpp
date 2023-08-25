#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Enter) // enter on num pad
    {
        ui->lbl_display->setText("Enter Pressed");
    }else if(event->key() == Qt::Key_Return)
    {
        ui->lbl_display->setText("Return Pressed"); // return and enter are diffrent..
    }
    else if(event->key() == Qt::Key_F12) // F12...
    {
        ui->lbl_display->setText("F12 Pressed");
    }else{
        ui->lbl_display->setText("Sorry button not recognized");
    }



}

