#ifndef POLYLINE_H
#define POLYLINE_H

#include "shape.h"

class Polyline: public Shape
{
    public:

        Polyline()
        {
            pointCount = 0;
        }

        ~Polyline() {}

        virtual void draw(QPaintDevice *device)
        {
            painter.begin(device);
            painter.setPen(getPen());

            painter.drawPolyline(points, pointCount);
            painter.end();
        }

        void setPointCount(int count)
        {
            pointCount = count;
        }

        void setPoints(QPoint* newPoints)
        {
            points = newPoints;
        }

    private:
        QPoint* points;
        int pointCount;

};

#endif // POLYLINE_H
