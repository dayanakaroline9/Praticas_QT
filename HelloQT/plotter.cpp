#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>

Plotter::Plotter(QWidget *parent) : QWidget(parent)
{

}

void Plotter::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    //brush cor amarelo e sólida
    brush.setColor(QColor(255,255,100));
    brush.setStyle(Qt::SolidPattern);

    //caneta cor vermelho
    pen.setColor(QColor(255,0,0));
    pen.setWidth(2);

    //informaq ao pintor qual o brush atual
    painter.setBrush(brush);
    //informaq ao pintor qual a caneta (pen) atual
    painter.setPen(pen);
    //desenha o retangulo abrangendo toda a extensão
    //componente
    painter.drawRect(0,0,width(),height());
}
