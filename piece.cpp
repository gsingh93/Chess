#include "piece.h"
#include <QPainter>
#include <QMouseEvent>
using namespace std;

Piece::Piece(string color, string piece, QWidget *parent) :
    QWidget(parent)
{
    this->piece = piece;
    this->color = color;
    //this->setFixedHeight(36);
    //this->setFixedWidth(36);
    x = 0;
    y = 0;
    setMouseTracking(false);
}

void Piece::paintEvent(QPaintEvent *)
{
    string image = ":/" + color + piece + ".png";
    pixmap.load(image.c_str());

    QPainter paint(this);
    paint.drawPixmap(x, y, pixmap);
}

void Piece::setPosition(int file, int rank)
{
    pixmap.load(":/whitepawn.png");
    QImage image = pixmap.toImage();
    x = (file-1)*50 + 25 - image.width()/2;
    y = (rank-1)*50 + 25 - image.height()/2;
}

//void Piece::mouseMoveEvent(QMouseEvent *event)
//{
//    if(event->buttons() == Qt::LeftButton && this->geometry().contains(event->pos()))
//    {
//	x = event->x()-18;
//	y = event->y()-18;
//	update();
//    }
//}

void Piece::mousePressEvent(QMouseEvent *)
{

}
