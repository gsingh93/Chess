#ifndef QUEEN_H
#define QUEEN_H

#include "headers/piece.h"

class Queen : public Piece
{
    Q_OBJECT
public:
    explicit Queen(string color, QWidget *parent = 0);

protected:

};

#endif // QUEEN_H
