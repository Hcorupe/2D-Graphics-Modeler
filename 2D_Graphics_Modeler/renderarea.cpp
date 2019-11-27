#include "renderarea.h"
#include"parser.h"
#include<QDebug>

RenderArea::RenderArea(QWidget *parent) : QWidget(parent)
{

}

void RenderArea::paintEvent(QPaintEvent * /* event */)
{

    Parser parser;

    cerr << (parser.fileOpen()? "in":"out");


//    parser.skipLine();
//    parser.readShapeId();
//    parser.readShapeType();
//    parser.readLineDimensions(point);
//    penColor = parser.readPenColor();
//    penWidth = parser.readPenWidth();
//    penStyle = parser.readPenStyle();
//    penCapStyle = parser.readPenCapStyle();
//    penJoinStyle = parser.readPenJoinStyle();

//    Line line1(id, point[0], point[1], penColor, penWidth, penStyle, penCapStyle, penJoinStyle);
//    line1.draw(this);







    // Test drawing on canvas
    Rectangle rect;
    rect.setLength(100);
    rect.setWidth(50);
    rect.move(100,50);
    rect.setBrushColor(Qt::green);
    rect.draw(this);

    Square square;
    square.setLength(150);
    square.move(600,200);
    square.setBrushColor(Qt::red);
    square.draw(this);



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
