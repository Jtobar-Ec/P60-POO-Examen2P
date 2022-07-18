#ifndef CIRCULO_H
#define CIRCULO_H

#include <QPoint>
#include <QMainWindow>
#include <QPainter>
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>


class Circulo : public QPoint
{
public:
    Circulo();
    Circulo(int xpos, int ypos);

private:
    QPixmap lienzo;
     QPainter *mPainter;
};

#endif // CIRCULO_H
