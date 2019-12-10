#include "renderarea.h"
#include "MainWindow.h"
#include"parser.h"
#include<QDebug>

RenderArea::RenderArea(QWidget *parent) : QWidget(parent)
{

    Parser parser;

     cerr << (parser.fileOpened()? "in":"out");
     shapes = parser.load();
     parser.save();
     parser.load();


    // Create shape labels
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

