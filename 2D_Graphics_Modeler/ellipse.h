#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "shape.h"

class Ellipse : public Shape
{
      public:
        Ellipse()
        {
            a = 0;
            b = 0;
        }

        Ellipse(int ID, QPoint sPoint, Qt::GlobalColor penColor, int penWidth, Qt::PenStyle penStyle,
                Qt::PenCapStyle capStyle, Qt::PenJoinStyle joinStyle, Qt::GlobalColor brushColor,
                Qt::BrushStyle brushStyle, int major, int minor)
                    :Shape(ID, sPoint, penColor, penWidth, penStyle, capStyle, joinStyle, brushColor, brushStyle)
        {
            a = major;
            b = minor;
        }

        ~Ellipse() {}

        virtual void draw(QPaintDevice* device)
        {
            painter.begin(device);
            painter.setPen(getPen());
            painter.setBrush(brush);

            painter.drawEllipse(getStartPoint().rx(), getStartPoint().ry(),a,b);
            painter.end();
        }

        virtual void setMajorAxisA(const int a_Value)
        {
            a = a_Value;
        }

        virtual void setMinorAxisB(const int b_Value)
        {
            b = b_Value;
        }

        virtual double GetArea()
        {
            return M_PI * a * b;
        }

        virtual double GetPerimeter()
        {
            return 2 * M_PI * (pow(((pow(a,2) + pow(b,2))/2), 0.5));
        }

        int getMajorAxisA()
        {
            return a;
        }

        int getMajorAxisB()
        {
            return b;
        }


      private:
        int a;    // Major axis length
        int b;    // Minor axis length
};



#endif // ELLIPSE_H
