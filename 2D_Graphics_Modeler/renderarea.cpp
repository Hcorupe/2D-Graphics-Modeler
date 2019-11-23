#include "renderarea.h"

RenderArea::RenderArea(QWidget *parent) : QWidget(parent)
{

}

void RenderArea::paintEvent(QPaintEvent * /* event */)
{

    // Test drawing on canvas
    Rectangle rect;
    rect.setLength(100);
    rect.setWidth(50);
    rect.move(100,50);
    rect.setBrushColor(Qt::green);

    Square square;
    square.setLength(150);
    square.move(600,200);
    square.setBrushColor(Qt::red);
    square.draw(this);

    rect.draw(this);

    Circle circle;
    circle.setMajorAxisA(100);
    circle.setBrushColor(Qt::blue);
    circle.draw(this);

    Line line;
    line.move(400,40);
    line.setEndPoint(550,10);
    line.setPenWidth(5);
    line.draw(this);

    Text text;
    text.move(700,50);
    text.draw(this);

    Polygon polygon;
    polygon.draw(this);

    Polyline polyline;
    polyline.draw(this);


}
