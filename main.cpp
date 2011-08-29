#include <qtgui>
#include "board.h"
#include "pawn.h"
#include "knight.h"
#include "bishop.h"
#include "rook.h"
#include "king.h"
#include "queen.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Board board;
    for(int i = 0; i <= 7; i++)
    {
	board.pawn[i]->setPosition(i+1, 7);
	board.bpawn[i]->setPosition(i+1, 2);
    }
    board.knight[0]->setPosition(2, 8);
    board.knight[1]->setPosition(7, 8);
    board.bishop[0]->setPosition(3, 8);
    board.bishop[1]->setPosition(6, 8);
    board.rook[0]->setPosition(1, 8);
    board.rook[1]->setPosition(8, 8);
    board.queen->setPosition(4, 8);
    board.king->setPosition(5, 8);

    board.bknight[0]->setPosition(2, 1);
    board.bknight[1]->setPosition(7, 1);
    board.bbishop[0]->setPosition(3, 1);
    board.bbishop[1]->setPosition(6, 1);
    board.brook[0]->setPosition(1, 1);
    board.brook[1]->setPosition(8, 1);
    board.bqueen->setPosition(4, 1);
    board.bking->setPosition(5, 1);

    board.show();
    return app.exec();
}