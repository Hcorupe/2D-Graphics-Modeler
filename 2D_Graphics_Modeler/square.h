#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"
#include "rectangle.h"

class Square : public Rectangle
{
      public:

        Square()
        {
            setLength(0);
            setWidth(0);
        }

        Square(int ID, QPoint sPoint, int side, Qt::GlobalColor penColor, int penWidth, Qt::PenStyle penStyle,
               Qt::PenCapStyle capStyle, Qt::PenJoinStyle joinStyle, Qt::GlobalColor brushColor,
               Qt::BrushStyle brushStyle)
                :Rectangle(ID, sPoint, side, side, penColor, penWidth, penStyle, capStyle, joinStyle, brushColor,
                           brushStyle) {}

        ~Square() {}

        virtual void setWidth(const int width)
        {
            Rectangle::setLength(width);
            Rectangle::setWidth(width);
        }

        virtual void setLength(const int length)
        {
            Rectangle::setLength(length);
            Rectangle::setWidth(length);
        }


};


#endif // SQUARE_H