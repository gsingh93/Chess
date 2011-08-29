#include "headers/square.h"
#include <QtGui>

Square::Square(QWidget *parent, int color, int file, char rank) : QWidget(parent)
{
    QPalette palette(Square::palette());
    palette.setColor(backgroundRole(), Qt::white);
    setPalette(palette);
    this->color = color;
    this->rank = rank;
    this->file = file;
}

void Square::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    if(color%2 == 1)
	painter.setBrush(QBrush("#c56c00"));
    else
	painter.setBrush(QBrush("#FFF380"));
    painter.drawRect(0, 0, 50, 50);
}
