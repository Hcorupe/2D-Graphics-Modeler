#ifndef LINE_H
#define LINE_H

#include "shape.h"

class Line : public Shape
{
    public:

        Line()
        {
            endPoint.setX(0);
            endPoint.setY(0);
        }

        Line(int ID, QPoint sPoint, QPoint ePoint, Qt::GlobalColor penColor, int penWidth, Qt::PenStyle penStyle,
             Qt::PenCapStyle capStyle, Qt::PenJoinStyle joinStyle)
                :Shape(ID, sPoint, penColor, penWidth, penStyle, capStyle, joinStyle, Qt::black, Qt::SolidPattern)
        {
            endPoint = ePoint;
        }

        ~Line() {}

        virtual void draw(QPaintDevice* device)
        {
            painter.begin(device);
            painter.setPen(getPen());

            painter.drawLine(getStartPoint(), endPoint);
            painter.end();
        }

        QPoint getEndPoint()
        {
            return endPoint;
        }

        void setEndPoint(int x, int y)
        {
            endPoint.setX(x);
            endPoint.setY(y);
        }

        double GetArea()
        {
            return 0;
        }

        double GetPerimeter()
        {
            return 0;
        }



    private:
        QPoint endPoint; // Point where line ends
};

#endif // LINE_H
