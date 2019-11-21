#ifndef SHAPE_H
#define SHAPE_H

#include <QDebug>
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QWidget>
#include <math.h>
#include <QString>
#include <QPaintDevice>

class Shape
{
    public:
        QPainter painter;
        QPen pen;
        QBrush brush;

        Shape()
        {
            setStartPoint(0,0);
            pen.setColor(Qt::black);
            pen.setWidth(1);
            pen.setStyle(Qt::SolidLine);
            pen.setCapStyle(Qt::SquareCap);
            pen.setJoinStyle(Qt::BevelJoin);
            brush.setColor(Qt::black);
            brush.setStyle(Qt::SolidPattern);
        }

        virtual ~Shape(){}

        bool operator < (const Shape& RHS)
        {
            return shapeID < RHS.shapeID;
        }

        bool operator > (const Shape& RHS)
        {
            return shapeID > RHS.shapeID;
        }

        bool operator == (const Shape& RHS)
        {
            return shapeID == RHS.shapeID;
        }

        void setShapeId(int num) {
            shapeID = num;
        }

        void setPenWidth(int w)
        {
            pen.setWidth(w);
        }

        void setPenColor(Qt::GlobalColor color)
        {
            pen.setColor(color);
        }

        void setPenStyle(Qt::PenStyle pStyle)
        {
            pen.setStyle(pStyle);
        }

        void setPenCapStyle(Qt::PenCapStyle cap)
        {
            pen.setCapStyle(cap);

        }

        void setPenJoinStyle(Qt::PenJoinStyle join)
        {
            pen.setJoinStyle(join);
        }

        void setBrushColor(Qt::GlobalColor color)
        {
           brush.setColor(color);
        }

        void setBrushStyle(Qt::BrushStyle bStyle)
        {
            brush.setStyle(bStyle);
        }

        void setStartPoint(int x, int y)
        {
            startPoint.setX(x);
            startPoint.setY(y);
        }

        int getShapeId()
        {
            return shapeID;
        }

        QPen getPen()
        {
            return pen;
        }

        QBrush getBrush()
        {
            return brush;
        }

        virtual void move(int x1Value, int y1Value)
        {
            startPoint.setX(x1Value);
            startPoint.setY(y1Value);
        }

        QPoint getStartPoint()
        {
            return startPoint;
        }

        virtual double GetArea() = 0;

        virtual double GetPerimeter() = 0;

        virtual void draw(QPaintDevice* device) = 0;

    private:
            int shapeID;
            QPoint startPoint; // Position of left top corner

};

#endif // SHAPE_H
