#ifndef ROOK_H
#define ROOK_H

#include "headers/piece.h"

class Rook : public Piece
{
    Q_OBJECT
public:
    explicit Rook(string color, QWidget *parent = 0);

protected:

};

#endif // ROOK_H
