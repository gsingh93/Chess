#ifndef SQUARE_H
#define SQUARE_H

#include <QWidget>

class Square : public QWidget
{
public:
    explicit Square(QWidget *parent, int color, int file, char rank);

protected:
    void paintEvent(QPaintEvent *);

private:
    int color;
    int file;
    char rank;
};

#endif // SQUARE_H
