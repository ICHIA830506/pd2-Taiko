#include "Game.h"

#include <QGraphicsTextItem>
#include <QFont>
#include "Enemy.h"
#include <QBrush>
#include <QImage>
#include "Timer.h"
//#include <MyTimer.h>



Game::Game(QWidget *parent){
    //create the scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);

    setBackgroundBrush(QBrush(QImage(":/images/bgnew.png")));


    //make the newly created scene to visualize
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,600);


    //create the player
    Player * player = new Player();
    player->setPos(250,375);
    // make the palyer focusable and set it to be the current focus
    player->setFlag(QGraphicsPixmapItem::ItemIsFocusable);
    player->setFocus();
    //add the player to the scene
    scene->addItem(player);

    //create the drum
    drum = new Drum();
    drum->setPos(0,0);
    //add the drum to the scene
    scene->addItem(drum);


    //--------------------

    //create the time

    ttimer = new Timer();

    ttimer->setPos(656,90);
    scene->addItem(ttimer);




    //--------------------


    //create the score
    score = new Score();
    score->setPos(656,17);
    scene->addItem(score);


    //spawn enemies

    //QTimer *
    timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),player,SLOT(spawn()));
    timer->start(800);

    // play background music
    //QMediaPlayer *
    music  = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/sounds/bgsound.mp3"));
    music->play();


    show();

}

void Game::gameOver()
{
    // disable all scene items
    //extern Game * game;
    //extern MyTimer * timer;
    //delete game->music;
    //delete game->timer;
    //delete game->ttimer;
    //delete game->score;
    //delete game->player;
    //delete game->scene;
    //delete timer;

    hide();
    gameOverWindow = new Dialog(this);
    gameOverWindow->show();

}

void Game::restartGame()
{
    delete this;

}
