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

        Square(int x, int y, int side, Qt::GlobalColor penColor, int penWidth, Qt::PenStyle penStyle,
               Qt::PenCapStyle capStyle, Qt::PenJoinStyle joinStyle, Qt::GlobalColor brushColor,
               Qt::BrushStyle brushStyle)
                :Rectangle(x, y, side, side, penColor, penWidth, penStyle, capStyle, joinStyle, brushColor,
                           brushStyle) {}

        ~Square() {}

        virtual void setWidth(int width)
        {
            Rectangle::setLength(width);
            Rectangle::setWidth(width);
        }

        virtual void setLength(int length)
        {
            Rectangle::setLength(length);
            Rectangle::setWidth(length);
        }


};


#endif // SQUARE_H
