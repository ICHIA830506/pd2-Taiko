#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Game.h"
#include <MyTimer.h>
extern Game * game; //there is an external global object called game
extern MyTimer * timer;

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
    hide();

    game = new Game();
    game->show();

    timer = new MyTimer();

}


void MainWindow::on_pushButton_2_clicked()
{
    this->close();
}
