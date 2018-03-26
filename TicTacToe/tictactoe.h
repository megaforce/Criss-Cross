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
    Player player;
    void mousePressEvent(QMouseEvent *event);
    void drawMap();
    Ui::TicTacToe *ui;
    QGraphicsScene *scene;

protected:
    void paintEvent(QPaintEvent *e);
};

#endif // TICTACTOE_H
