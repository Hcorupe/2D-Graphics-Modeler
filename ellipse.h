#ifndef ELLIPES_H
#define ELLIPES_H

#include "shape.h"

class ellipse : public Shape
{
      public:
        ellipse()
        {
            a = 0;
            b = 0;
        }
        ~ellipse()
        {

        }

        virtual void draw(QPaintDevice* device)
        {
            painter.begin(device);
            painter.setPen(getPen());
            painter.setBrush(brush);

            painter.drawEllipse(startPoint.rx(), startPoint.ry(),a,b);
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

        void setACoordinate(int a_Value)
        {
            a = a_Value;
        }
        void setBCoordinate(int b_Value)
        {
            b = b_Value;
        }

        virtual int GetArea()
        {
            return M_PI * a * b;
        }

        virtual int GetPerimeter()
        {
            return (int)(2 * M_PI * (pow(((pow(a,2) + pow(b,2))/2), 0.5)));
        }
        int getACoordinate()
        {
            return a;
        }
        int getBCoordinate()
        {
            return b;
        }


      private:
        QPoint startPoint;
        int a;
        int b;
};



#endif // ELLIPES_H
