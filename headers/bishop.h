#ifndef BISHOP_H
#define BISHOP_H

#include "headers/piece.h"

class Bishop : public Piece
{
    Q_OBJECT
public:
    explicit Bishop(string color, QWidget *parent = 0);

protected:

};

#endif // BISHOP_H
