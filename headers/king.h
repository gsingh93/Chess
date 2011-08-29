#ifndef KING_H
#define KING_H

#include "headers/piece.h"

class King : public Piece
{
    Q_OBJECT
public:
    explicit King(string color, QWidget *parent = 0);

protected:

};

#endif // KING_H
