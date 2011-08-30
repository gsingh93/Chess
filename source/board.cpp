#include "headers/board.h"
#include "headers/square.h"
#include "headers/pawn.h"
#include "headers/knight.h"
#include "headers/bishop.h"
#include "headers/rook.h"
#include "headers/queen.h"
#include "headers/king.h"

Board::Board(QWidget *parent) : QWidget(parent)
{
    int color = 1;
    sqrVector.resize(8);
    layout = new QGridLayout;

    for(int i = 1; i <= 8; i++)
    {
	sqrVector[i-1].resize(8);
	for(int j = 1; j <= 8; j++)
	{
	    color *= -1;
	    sqrVector[i-1][j-1] = new Square(this, color, j, char(i+96));
	    sqrVector[i-1][j-1]->setFixedSize(50,50);
	    layout->addWidget(sqrVector[i-1][j-1], i, j);
	}
	color *= -1;
	pawn[i-1] = new Pawn("white");
	//layout->addWidget(pawn[i-1], 1, 1, 8, 8);


	bpawn[i-1] = new Pawn("black");
	layout->addWidget(bpawn[i-1], 1, 1, 8, 8);
    }

    for (int i = 0; i < 2; i++)
    {
	knight[i] = new Knight("white");
	bishop[i] = new Bishop("white");
	rook[i] = new Rook("white");
	layout->addWidget(knight[i], 1, 1, 8, 8);
	layout->addWidget(bishop[i], 1, 1, 8, 8);
	layout->addWidget(rook[i], 1, 1, 8, 8);

	bknight[i] = new Knight("black");
	bbishop[i] = new Bishop("black");
	brook[i] = new Rook("black");
	layout->addWidget(bknight[i], 1, 1, 8, 8);
	layout->addWidget(bbishop[i], 1, 1, 8, 8);
	layout->addWidget(brook[i], 1, 1, 8, 8);
    }

    queen = new Queen("white");
    king = new King("white");

    layout->addWidget(queen, 1, 1, 8, 8);
    layout->addWidget(king, 1, 1, 8, 8);

    bqueen = new Queen("black");
    bking = new King("black");

    layout->addWidget(bqueen, 1, 1, 8, 8);
    layout->addWidget(bking, 1, 1, 8, 8);

    layout->setSpacing(0);
    layout->setSizeConstraint(QLayout::SetFixedSize);
    this->setLayout(layout);
}
