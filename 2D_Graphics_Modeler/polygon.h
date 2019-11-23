#ifndef POLYGON_H
#define POLYGON_H

#include "shape.h"
#include "vector.h"

class Polygon: public Shape
{
    public:

        Polygon()
        {
            QPoint p1(0,0);
            QPoint p2(10,0);
            QPoint p3(5,10);
            points.push_back(p1);
            points.push_back(p2);
            points.push_back(p3);

        }

        Polygon(int ID, myStd::vector<QPoint> newPoints, Qt::GlobalColor penColor, int penWidth, Qt::PenStyle penStyle,
                Qt::PenCapStyle capStyle, Qt::PenJoinStyle joinStyle, Qt::GlobalColor brushColor,
                Qt::BrushStyle brushStyle)
                :Shape(ID, *(newPoints.begin()), penColor, penWidth, penStyle, capStyle, joinStyle, brushColor, brushStyle)
        {
            points = newPoints;
        }

        ~Polygon() {}

        virtual void draw(QPaintDevice *device)
        {
            painter.begin(device);
            painter.setPen(getPen());

            painter.drawPolygon(points.begin(), points.size());
            painter.end();
        }

        void setPoints(const myStd::vector<QPoint> newPoints)
        {
            points = newPoints;
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
        myStd::vector<QPoint> points;
};

#endif // POLYGON_H
