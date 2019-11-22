#include "renderarea.h"

RenderArea::RenderArea(QWidget *parent) : QWidget(parent)
{

}

void RenderArea::paintEvent(QPaintEvent * /* event */)
{
    Rectangle rect;
    rect.setLength(100);
    rect.setWidth(50);
    rect.move(50,50);
    rect.setBrushColor(Qt::green);

    rect.draw(this);

}
