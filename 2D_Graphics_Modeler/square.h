#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"
#include "rectangle.h"

class Square : public Rectangle
{
      public:

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
