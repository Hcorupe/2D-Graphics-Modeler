#include "renderarea.h"
#include "MainWindow.h"
#include"parser.h"
#include<QDebug>

RenderArea::RenderArea(QWidget *parent) : QWidget(parent)
{

    Parser parser;

     cerr << (parser.fileOpened()? "in":"out");
//     shapes = parser.readShape();

    // Test rendering default shapes (Replace with file parser when finished)

    QPoint sPoint(20,90);
    QPoint ePoint(100,20);
    Shape* line = new Line(1,sPoint,ePoint,Qt::blue,2,Qt::DashDotLine,Qt::FlatCap,Qt::MiterJoin);

    myStd::vector<QPoint> points;
    QPoint point(460,90);
    points.push_back(point);
    point.setX(470);
    point.setY(20);
    points.push_back(point);
    point.setX(530);
    point.setY(40);
    points.push_back(point);
    point.setX(540);
    point.setY(80);
    points.push_back(point);

    Shape* polyline = new Polyline(2,points,Qt::green,6,Qt::SolidLine,Qt::FlatCap,Qt::MiterJoin);

    myStd::vector<QPoint> points2;
    point.setX(900);
    point.setY(90);
    points2.push_back(point);
    point.setX(910);
    point.setY(20);
    points2.push_back(point);
    point.setX(970);
    point.setY(40);
    points2.push_back(point);
    point.setX(980);
    point.setY(80);
    points2.push_back(point);

    Shape* polygon = new Polygon(3,points2,Qt::cyan,6,Qt::DashDotDotLine,Qt::FlatCap,Qt::MiterJoin,Qt::yellow,Qt::SolidPattern);

    point.setX(20);
    point.setY(200);
    Shape* rectangle = new Rectangle(4,point,170,100,Qt::blue,0,Qt::DashLine,Qt::RoundCap,Qt::RoundJoin,Qt::red,Qt::VerPattern);

    point.setX(250);
    point.setY(150);
    Shape* square = new Square(5,point,200,Qt::red,0,Qt::SolidLine,Qt::RoundCap,Qt::RoundJoin,Qt::blue,Qt::HorPattern);

    point.setX(520);
    point.setY(200);
    Shape* ellipse = new Ellipse(6,point,Qt::black,12,Qt::SolidLine,Qt::FlatCap,Qt::MiterJoin,Qt::white,Qt::NoBrush,170,100);

    point.setX(750);
    point.setY(150);
    Shape* circle = new Circle(7,point,Qt::black,12,Qt::SolidLine,Qt::FlatCap,Qt::MiterJoin,Qt::magenta,Qt::SolidPattern,200);

    point.setX(250);
    point.setY(425);
    Shape* text = new Text(8,point,500,50,"Class Project 2 - 2D Graphics Modeler",Qt::blue,Qt::AlignCenter,10,"Comic Sans MS",QFont::StyleNormal,QFont::Normal);

    shapes.push_back(line);
    shapes.push_back(polyline);
    shapes.push_back(polygon);
    shapes.push_back(rectangle);
    shapes.push_back(square);
    shapes.push_back(ellipse);
    shapes.push_back(circle);
    shapes.push_back(text);

    // Create shape labels KEEP AFTER FILE PARSER
    for(int i = 0; i < shapes.size(); i++)
    {
        QPoint point = shapes[i]->getStartPoint();
        point.setX(point.x() - LABEL_OFFSET);
        point.setY(point.y() + LABEL_OFFSET);

        Text* text = new Text(8,point,500,50,QString::number(shapes[i]->getShapeId()),Qt::black,Qt::AlignLeft,10,"Sans Serif",QFont::StyleNormal,QFont::Normal);

        shapeLabels.push_back(text);
    }




}


void RenderArea::paintEvent(QPaintEvent * /* event */)
{

    // Draw shapes in vector

    for(int i = 0; i < shapes.size(); i++)
    {
        shapes[i]->draw(this);
        shapeLabels[i]->draw(this);
    }


}

RenderArea::~RenderArea()
{
    // Deallocate all shapes
    for(int i = 0; i < shapes.size(); i++)
    {
        delete shapes[i];
    }
}

