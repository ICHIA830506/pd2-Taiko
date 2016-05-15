#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include "Player.h"
#include "Score.h"
#include "Drum.h"
#include "Timer.h"
#include <QMediaPlayer>
#include <QTimer>
#include "Dialog.h"


class Game: public QGraphicsView{
public:
    // constructors
    Game(QWidget * parent=0);

    void gameOver();
    void restartGame();

    // piblic attributes
    QGraphicsScene * scene;
    Player * player;
    Score * score;
    Drum * drum;
    Timer * ttimer;

    Dialog * gameOverWindow;

    QMediaPlayer * music;
    QTimer * timer;
};


#endif // GAME_H
