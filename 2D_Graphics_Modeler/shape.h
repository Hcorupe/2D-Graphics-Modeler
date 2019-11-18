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
            return shapeID < RHS.shapeID;
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
            if(color == Qt::black)
            {
              pen.setColor(Qt::black);
            }
            else if(color == Qt::white)
            {
                pen.setColor(Qt::white);
            }
            else if(color == Qt::red)
            {
                pen.setColor(Qt::red);
            }
            else if(color == Qt::green)
            {
                pen.setColor(Qt::green);
            }
            else if(color == Qt::blue)
            {
                pen.setColor(Qt::blue);
            }
            else if(color == Qt::cyan)
            {
                pen.setColor(Qt::cyan);
            }
            else if(color == Qt::magenta)
            {
                pen.setColor(Qt::magenta);
            }
            else if(color == Qt::yellow)
            {
                pen.setColor(Qt::yellow);
            }
            else if(color == Qt::gray)
            {
                pen.setColor(Qt::gray);
            }
            else
            {
                pen.setColor(Qt::black);
            }
        }

        void setPenStyle(Qt::PenStyle pStyle)
        {
            if(pStyle == Qt::SolidLine)
            {
                pen.setStyle(Qt::SolidLine);
            }
            else if(pStyle == Qt::DashLine)
            {
                pen.setStyle(Qt::DashLine);
            }
            else if(pStyle == Qt::DotLine)
            {
                pen.setStyle(Qt::DotLine);
            }
            else if(pStyle == Qt::DashDotLine)
            {
                pen.setStyle(Qt::DashDotLine);
            }
            else
            {
                pen.setStyle(Qt::SolidLine);
            }
        }

        void setPenCapStyle(Qt::PenCapStyle cap)
        {
            if (cap == Qt::FlatCap)
            {
                pen.setCapStyle(Qt::FlatCap);
            }
            else if (cap == Qt::SquareCap)
            {
               pen.setCapStyle(Qt::SquareCap);
            }
            else if(cap == Qt::RoundCap)
            {
                pen.setCapStyle(Qt::RoundCap);
            }

        }

        void setPenJoinStyle(Qt::PenJoinStyle join)
        {
            if(join == Qt::MiterJoin)
            {
                pen.setJoinStyle(Qt::MiterJoin);
            }
            else if(join == Qt::BevelJoin)
            {
                pen.setJoinStyle(Qt::BevelJoin);
            }
            else if(join == Qt::RoundJoin)
            {
                pen.setJoinStyle(Qt::RoundJoin);
            }
            else
            {
                pen.setJoinStyle(Qt::MiterJoin);
            }
        }

        void setBrushColor(Qt::GlobalColor color)
        {
            if(color == Qt::black)
            {
              brush.setColor(Qt::black);
            }
            else if(color == Qt::white)
            {
                brush.setColor(Qt::white);
            }
            else if(color == Qt::red)
            {
                brush.setColor(Qt::red);
            }
            else if(color == Qt::green)
            {
                brush.setColor(Qt::green);
            }
            else if(color == Qt::blue)
            {
                brush.setColor(Qt::blue);
            }
            else if(color == Qt::cyan)
            {
                brush.setColor(Qt::cyan);
            }
            else if(color == Qt::magenta)
            {
                brush.setColor(Qt::magenta);
            }
            else if(color == Qt::yellow)
            {
                brush.setColor(Qt::yellow);
            }
            else if(color == Qt::gray)
            {
                brush.setColor(Qt::gray);
            }
            else
            {
                brush.setColor(Qt::black);
            }
        }

        void setBrushStyle(Qt::BrushStyle bStyle)
        {
            if(bStyle == Qt::NoBrush)
            {
                brush.setStyle(Qt::NoBrush);
            }
            else if(bStyle == Qt::SolidPattern)
            {
                brush.setStyle(Qt::SolidPattern);
            }
            else if(bStyle == Qt::HorPattern)
            {
                brush.setStyle(Qt::HorPattern);
            }
            else if (bStyle == Qt::VerPattern)
            {
                brush.setStyle(Qt::VerPattern);
            }
            else
            {
                brush.setStyle(Qt::NoBrush);
            }
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
