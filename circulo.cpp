#include "circulo.h"


#include <QImage>
#include <QPainter>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QDebug>
#include <QInputDialog>
#include <QColorDialog>
#include <QFileDialog>
#include <QMessageBox>

Circulo::Circulo()
    :QPoint(0,0)
{

}

Circulo::Circulo(int xpos, int ypos)
    :QPoint(xpos, ypos)
{
     lienzo.fill(Qt::white);

     QPainter painter(&lienzo);

    QPen pincel;
    pincel.setWidth(5);
    pincel.setColor(Qt::red);
    pincel.setJoinStyle(Qt::MiterJoin);

    painter.setPen(pincel);
    mPainter->drawEllipse(100,100,100,100);
}
