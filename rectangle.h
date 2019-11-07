#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"
class rectangle : public Shape
{
      public:

        rectangle()
        {

        }
        ~rectangle()
        {

        }

        virtual void draw(QPaintDevice* device)
        {
            painter.begin(device);
            painter.setPen(getPen());
            painter.setBrush(brush);

            painter.drawRect(startPoint.rx(),startPoint.ry(),width,length);
            painter.end();
        }

        virtual void move(int xCoor, int yCoor)
        {
            setCenterpoint(xCoor, yCoor);
        }

        void setCenterpoint(int xCoor, int yCoor)
        {
            startPoint.setX(xCoor);
            startPoint.setY(yCoor);
        }
        void setLength(int lValue)
        {
            length = lValue;
        }
        void setWidth(int wValue)
        {
            width = wValue;
        }

        virtual int GetArea()
        {
            return (int)(pow(length, 2));
        }
        virtual int GetPerimeter()
        {
            return 2 * (length+width);
        }

        int getCenterPointX()
        {
            return startPoint.rx();
        }
        int getCenterPointY()
        {
            return startPoint.ry();
        }

        int getLength()
        {
            return length;
        }
        int getWidth()
        {
            return width;
        }

      private:
        QPoint startPoint;
        int length;
        int width;
};



#endif // RECTANGLE_H
