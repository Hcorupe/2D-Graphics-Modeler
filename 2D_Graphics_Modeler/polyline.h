#ifndef POLYLINE_H
#define POLYLINE_H

#include "shape.h"
#include "vector.h"

class Polyline: public Shape
{
    public:

        Polyline()
        {
            QPoint p1(20,50);
            QPoint p2(250,100);
            QPoint p3(500,10);
            points.push_back(p1);
            points.push_back(p2);
            points.push_back(p3);
        }

        Polyline(int ID, myStd::vector<QPoint> newPoints, Qt::GlobalColor penColor, int penWidth, Qt::PenStyle penStyle,
                Qt::PenCapStyle capStyle, Qt::PenJoinStyle joinStyle)
                :Shape(ID, *(newPoints.begin()), penColor, penWidth, penStyle, capStyle, joinStyle, Qt::black, Qt::SolidPattern)
        {
            points = newPoints;
        }

        ~Polyline() {}

        virtual void draw(QPaintDevice *device)
        {
            painter.begin(device);
            painter.setPen(getPen());

            painter.drawPolyline(points.begin(), points.size());
            painter.end();
        }

        void setPoints(const myStd::vector<QPoint> newPoints)
        {
            points = newPoints;
        }

        myStd::vector<QPoint> getPoints()
        {
            return points;
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

#endif // POLYLINE_H
