#include "tictactoe.h"
#include "ui_tictactoe.h"

TicTacToe::TicTacToe(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TicTacToe)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    drawMap();
}

TicTacToe::~TicTacToe()
{
    delete ui;
}

void TicTacToe::drawMap()
{
    for(int x = 0; x < 1000; x = x + 10)
    {
        scene->addLine(0,x,1000,x);
    }
    for(int y = 0; y < 1000; y = y + 10)
    {
        scene->addLine(y,0,y,1000);
    }

    scene->addLine(1000,0,1000,1000);
    scene->addLine(0,1000,1000,1000);
}

void TicTacToe::mousePressEvent(QMouseEvent *event)
{


    if (event->button() == Qt::LeftButton)
    {
        qDebug()<<"x: "<<event->x();
        qDebug()<<"y: "<<event->y();
    }

}

void TicTacToe::paintEvent(QPaintEvent *e)
{

}
