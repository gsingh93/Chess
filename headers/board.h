#ifndef BOARD_H
#define BOARD_H

#include <QWidget>
#include <QVector>
#include <QGridLayout>
class Square;

class Pawn;
class Knight;
class Bishop;
class Rook;
class Queen;
class King;

class Board : public QWidget
{
public:
    explicit Board(QWidget *parent = 0);
    QVector < QVector<Square *> > sqrVector;
    Pawn *pawn[8];
    Pawn *bpawn[8];

    Knight *knight[2];
    Knight *bknight[2];

    Bishop *bishop[2];
    Bishop *bbishop[2];

    Rook *rook[2];
    Rook *brook[2];

    Queen *queen;
    Queen *bqueen;

    King *king;
    King *bking;

protected:

private:
    QGridLayout *layout;
};

#endif // BOARD_H
