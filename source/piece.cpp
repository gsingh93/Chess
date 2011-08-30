#include "headers/piece.h"
#include <QPainter>
#include <QMouseEvent>
#include <QBitmap>
#include <QCursor>
using namespace std;

Piece::Piece(string color, string piece, QWidget *parent) :
    QWidget(parent)
{
    this->piece = piece;
    this->color = color;
    this->setMaximumHeight(36);
    this->setMaximumWidth(36);
    x = 0;
    y = 0;
    setMouseTracking(false);
}

void Piece::paintEvent(QPaintEvent *)
{
    string image = ":/images/" + color + piece + ".png";
    pixmap.load(image.c_str());
    //pixmap.setMask(pixmap.createMaskFromColor(QColor(240, 240, 240)));

    QPainter paint(this);
    paint.drawPixmap(0, 0, pixmap);
}

void Piece::setPosition(int file, int rank)
{
    pixmap.load(":/images/whitepawn.png");
    QImage image = pixmap.toImage();
    x = (file-1)*50 + 18;// - image.width()/2;
    y = (rank-1)*50 + 18;// - image.height()/2;
    move(x, y);
}

void Piece::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() == Qt::LeftButton)
    {
	x = event->globalX()-18;
	y = event->globalY()-18;
	move(x,y);
    }
}

