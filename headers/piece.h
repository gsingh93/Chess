#ifndef PIECE_H
#define PIECE_H

#include <QWidget>
using namespace std;

class Piece : public QWidget
{
    Q_OBJECT
public:
    explicit Piece(string color, string piece, QWidget *parent = 0);
    void setPosition(int rank, int file);
    QPixmap pixmap;

protected:
    void paintEvent(QPaintEvent *);
    void mouseMoveEvent(QMouseEvent *);
    //    void mousePressEvent(QMouseEvent *);
    int rank;
    int file;
    int x;
    int y;

private:
    string piece;
    string color;

};

#endif // PIECE_H
