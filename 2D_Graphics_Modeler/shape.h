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
            startPoint.setX(0);
            startPoint.setY(0);
            pen.setColor(Qt::black);
            pen.setWidth(1);
            pen.setStyle(Qt::SolidLine);
            pen.setCapStyle(Qt::SquareCap);
            pen.setJoinStyle(Qt::BevelJoin);
            brush.setColor(Qt::black);
            brush.setStyle(Qt::SolidPattern);
        }

        Shape(int ID, QPoint sPoint, Qt::GlobalColor penColor, int penWidth, Qt::PenStyle penStyle,
              Qt::PenCapStyle capStyle, Qt::PenJoinStyle joinStyle, Qt::GlobalColor brushColor,
              Qt::BrushStyle brushStyle)
        {
            shapeID = ID;
            startPoint = sPoint;
            pen.setColor(penColor);
            pen.setWidth(penWidth);
            pen.setStyle(penStyle);
            pen.setCapStyle(capStyle);
            pen.setJoinStyle(joinStyle);
            brush.setColor(brushColor);
            brush.setStyle(brushStyle);
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

        void setShapeId(const int num) {
            shapeID = num;
        }

        void setPenWidth(const int w)
        {
            pen.setWidth(w);
        }

        void setPenColor(const Qt::GlobalColor color)
        {
            pen.setColor(color);
        }

        void setPenStyle(const Qt::PenStyle pStyle)
        {
            pen.setStyle(pStyle);
        }

        void setPenCapStyle(const Qt::PenCapStyle cap)
        {
            pen.setCapStyle(cap);

        }

        void setPenJoinStyle(const Qt::PenJoinStyle join)
        {
            pen.setJoinStyle(join);
        }

        void setBrushColor(const Qt::GlobalColor color)
        {
           brush.setColor(color);
        }

        void setBrushStyle(const Qt::BrushStyle bStyle)
        {
            brush.setStyle(bStyle);
        }

        void setStartPoint(const QPoint sPoint)
        {
            startPoint = sPoint;
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

        virtual void move(const int x1Value, int y1Value)
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
