#ifndef PAWN_H
#define PAWN_H

#include "headers/piece.h"
#include <string>
using namespace std;

class Pawn : public Piece
{
    Q_OBJECT
public:
    explicit Pawn(string color, QWidget *parent = 0);

protected:

};

#endif // PAWN_H
