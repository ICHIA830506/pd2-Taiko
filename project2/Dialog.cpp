#include "Dialog.h"
#include "ui_Dialog.h"
#include "Game.h"
#include <MyTimer.h>
extern Game * game;
extern MyTimer * timer;

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->labelScore->setText(QString::number(Score::finalScore));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    hide();
    game->restartGame();

    game = new Game();
    game->show();

    timer = new MyTimer();

}

void Dialog::on_pushButton_2_clicked()
{
    this->close();
}
