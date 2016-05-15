#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsTextItem>

class Score: public QGraphicsTextItem{
public:
    Score(QGraphicsItem * parent = 0);
    void increase();

    int score;
    static int finalScore;

    int getScore() const;
    static void setFinalScore(int score);
};
#endif // SCORE_H
