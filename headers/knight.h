#ifndef KNIGHT_H
#define KNIGHT_H

#include "headers/piece.h"

class Knight : public Piece
{
    Q_OBJECT
public:
    explicit Knight(string color, QWidget *parent = 0);

protected:

};

#endif // KNIGHT_H
