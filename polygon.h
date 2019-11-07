#ifndef POLYGON_H
#define POLYGON_H

#include "shape.h"

class polygon: public Shape
{
    public:
        polygon() : Shape()
        {
            pointList = new QPointF[5];
            pointCount = 0;
        }
        ~polygon()
        {
            delete [] pointList;
        }

        void addPoint(int x,int y)
        {
            pointList[pointCount].setX(x);
            pointList[pointCount].setY(y);
            pointCount++;
        }

        void initializeList()
        {
            for(int i = 0; i < pointCount; i++)
            {
                qPt[i].setX(pointList[i].rx());
                qPt[i].setY(pointList[i].ry());
            }
        }

        void draw(QPaintDevice *device)
        {
            {
                painter.begin(device);
                painter.setPen(getPen());
                painter.setBrush(brush);

                painter.drawPolygon(pointList, pointCount);
                painter.end();
            }
        }
        void move(int x, int y) {
            int offsetX = x - pointList[0].x();
            int offsetY = y - pointList[0].y();

            bool firstPoint = false;
            for (int i = 0; i < pointCount; ++i) {
                pointList[i].setX(pointList[i].x()+offsetX);
                pointList[i].setY(pointList[i].y()+offsetY);
            }
        }

        virtual int GetPerimeter() {
            int perimeter = 0;
            for (int i = 0; i < pointCount; ++i) {
                perimeter += sqrt(pow(pointList[i+1].x()-pointList[i].x(),2) + pow(pointList[i+1].y()-pointList[i].y(),2));
                if(i == (pointCount - 1)) {
                    perimeter += sqrt(pow(pointList[0].x()-pointList[i].x(),2) + pow(pointList[0].y() - pointList[i].y(),2));
                }
            }
            return perimeter;
        }
        virtual int GetArea() {
           int area = 0;
           for (int i = 0; i < pointCount; ++i) {
               area += ((pointList[i].x()*pointList[i+1].y()) - ((pointList[i].x()*pointList[i+1].y())));
               if(i == (pointCount-1)) {
                   area += ((pointList[i].x()*pointList[0].y()) - (pointList[i].y()*pointList[0].x()));
               }
           }
           return area;
        }

    private:
        QPointF *pointList;
        vector <QPoint> qPt;
        int pointCount;
};

#endif // POLYGON_H
