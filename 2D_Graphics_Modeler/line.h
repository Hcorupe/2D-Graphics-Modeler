#ifndef LINE_H
#define LINE_H

#include "shape.h"

class Line : public Shape
{
    public:

        Line()
        {

        }

        ~Line() {}

        virtual void draw(QPaintDevice* device)
        {
            painter.begin(device);
            painter.setPen(getPen());
            painter.setBrush(brush);

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

    private:
        QPoint endPoint; // Point where line ends
};

#endif // LINE_H
