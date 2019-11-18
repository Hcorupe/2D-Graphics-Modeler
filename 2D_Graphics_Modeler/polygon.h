#ifndef POLYGON_H
#define POLYGON_H

#include "shape.h"

class Polygon: public Shape
{
    public:

        Polygon()
        {

        }

        ~Polygon() {}

        virtual void draw(QPaintDevice *device)
        {
            painter.begin(device);
            painter.setPen(getPen());

            painter.drawPolygon(points, pointCount);
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

#endif // POLYGON_H
