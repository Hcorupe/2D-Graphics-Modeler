#ifndef CIRCLE_H
#define CIRCLE_H

#include "ellipse.h"

class Circle : public Ellipse
{
    public:

        Circle()
        {
            setMajorAxisA(0);
            setMinorAxisB(0);
        }

        Circle(int ID, QPoint sPoint, Qt::GlobalColor penColor, int penWidth, Qt::PenStyle penStyle,
               Qt::PenCapStyle capStyle, Qt::PenJoinStyle joinStyle, Qt::GlobalColor brushColor,
               Qt::BrushStyle brushStyle, int axis)
                :Ellipse(ID, sPoint, penColor, penWidth, penStyle, capStyle, joinStyle, brushColor, brushStyle, axis, axis){}

        ~Circle() {}

        virtual void setMajorAxisA(const int a_Value)
        {
           Ellipse::setMajorAxisA(a_Value);
           Ellipse::setMinorAxisB(a_Value);
        }

        virtual void setMinorAxisB(const int b_Value)
        {
           Ellipse::setMajorAxisA(b_Value);
           Ellipse::setMinorAxisB(b_Value);
        }
};

#endif // CIRCLE_H
