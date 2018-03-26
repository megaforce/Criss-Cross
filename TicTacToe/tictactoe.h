#ifndef TICTACTOE_H
#define TICTACTOE_H

#include "player.h"
#include <QWidget>
#include <QtGui>
#include <QtCore>
#include <QDialog>
#include <QGraphicsScene>
#include <QDebug>
#include <QPoint>
#include <QLinkedList>

struct element
{
    QPoint location; //elements quadrant
    short type; // 0 = nought 1 = cross
};

namespace Ui {
class TicTacToe;
}

class TicTacToe : public QWidget
{
    Q_OBJECT

public:
    explicit TicTacToe(QWidget *parent = 0);
    ~TicTacToe();

private:
    QList<element> elements;
    Player player;
    void mousePressEvent(QMouseEvent *event);
    void calculateField();
    void drawMap();
    Ui::TicTacToe *ui;
    QGraphicsScene *scene;     

protected:
    void paintEvent(QPaintEvent *e);
};

#endif // TICTACTOE_H
