#ifndef CIRCLE_H
#define CIRCLE_H

#include "ellipse.h"

class Circle : public Ellipse
{
    public:

        ~Circle() {}

        virtual void setMajorAxisA(int a_Value)
        {
           Ellipse::setMajorAxisA(a_Value);
           Ellipse::setMinorAxisB(a_Value);
        }

        virtual void setMinorAxisB(int b_Value)
        {
           Ellipse::setMajorAxisA(b_Value);
           Ellipse::setMinorAxisB(b_Value);
        }
};

#endif // CIRCLE_H
