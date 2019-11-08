#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square : public Shape
{
      public:
        Square()
        {
           length = 0;
        }
        ~Square()
        {

        }

        virtual void draw(QPaintDevice* device)
        {
            painter.begin(device);
            painter.setPen(getPen());
            painter.setBrush(brush);

            painter.drawRect(startPoint.rx(),startPoint.ry(),length,length);
            painter.end();
        }

        virtual void move(int x, int y)
        {
            setCenterpoint(x, y);
        }

        void setCenterpoint(int x, int y)
        {
            startPoint.setX(x);
            startPoint.setY(y);
        }

        void setLength(int lValue)
        {
            length = lValue;
        }

        virtual int GetArea()
        {
            return (int)(pow(length, 2));
        }

        virtual int GetPerimeter()
        {
            return 4 * length;
        }


        int getLength()
        {
            return length;
        }

        private:
        QPoint startPoint;
        int length;

};


#endif // SQUARE_H
