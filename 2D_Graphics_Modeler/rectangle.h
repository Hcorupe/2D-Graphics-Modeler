#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"
class Rectangle : public Shape
{
      public:

        Rectangle()
        {
            length = 0;
            width  = 0;
        }

        Rectangle(int ID, QPoint sPoint,  int l, int w, Qt::GlobalColor penColor, int penWidth, Qt::PenStyle penStyle,
                  Qt::PenCapStyle capStyle, Qt::PenJoinStyle joinStyle, Qt::GlobalColor brushColor,
                  Qt::BrushStyle brushStyle)
                    :Shape(ID, sPoint, penColor, penWidth, penStyle, capStyle, joinStyle, brushColor, brushStyle)
        {
            length = l;
            width  = w;
        }

        ~Rectangle(){}

        virtual void draw(QPaintDevice* device)
        {
            painter.begin(device);
            painter.setPen(getPen());
            painter.setBrush(brush);

            painter.drawRect(getStartPoint().rx(),getStartPoint().ry(),width,length);
            painter.end();
        }

        virtual void setLength(const int lValue)
        {
            length = lValue;
        }

        virtual void setWidth(const int wValue)
        {
            width = wValue;
        }

        virtual double GetArea()
        {
            return length * width;
        }

        virtual double GetPerimeter()
        {
            return 2 * (length+width);
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
        int length;
        int width;
};



#endif // RECTANGLE_H
