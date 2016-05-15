#ifndef MYRECT_H
#define MYRECT_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <Enemy.h>
#include "Drum.h"



class Player:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Player(QGraphicsItem * parent=0);
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
    static int Key_Blue;
    static int Key_Red;
    Drum * drum;

public slots:
    void spawn();
};

#endif // MYRECT_H
