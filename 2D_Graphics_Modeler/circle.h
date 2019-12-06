#ifndef CIRCLE_H
#define CIRCLE_H

#include "ellipse.h"

/*!
 * \brief The Circle class inherits from Ellipse class
 */
class Circle : public Ellipse
{
    public:

        /*!
         * \brief Default constructor
         */
        Circle()
        {
            setMajorAxisA(0);
            setMinorAxisB(0);
        }

        /*!
         * \brief Alternate constructor
         * \param ID
         * \param sPoint
         * \param penColor
         * \param penWidth
         * \param penStyle
         * \param capStyle
         * \param joinStyle
         * \param brushColor
         * \param brushStyle
         * \param axis
         */
        Circle(int ID, QPoint sPoint, Qt::GlobalColor penColor, int penWidth, Qt::PenStyle penStyle,
               Qt::PenCapStyle capStyle, Qt::PenJoinStyle joinStyle, Qt::GlobalColor brushColor,
               Qt::BrushStyle brushStyle, int axis)
                :Ellipse(ID, sPoint, penColor, penWidth, penStyle, capStyle, joinStyle, brushColor, brushStyle, axis, axis){}

        //! Destructor
        ~Circle() override {}

        /*!
         * \brief setMajorAxisA sets both axes
         * \param a_Value
         */
        void setMajorAxisA(const int a_Value) override
        {
           Ellipse::setMajorAxisA(a_Value);
           Ellipse::setMinorAxisB(a_Value);
        }

        /*!
         * \brief setMinorAxisB sets both axes
         * \param b_Value
         */
        void setMinorAxisB(const int b_Value) override
        {
           Ellipse::setMajorAxisA(b_Value);
           Ellipse::setMinorAxisB(b_Value);
        }

        SHAPE getShapeType() override
        {
            return CIRCLE;
        }

        const char* GetShapeTypeString() override
        {
            return "Circle";
        }
};

#endif // CIRCLE_H
