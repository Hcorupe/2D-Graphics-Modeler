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

<<<<<<< HEAD
        Circle(int ID, QPoint sPoint, int axis, Qt::GlobalColor penColor, int penWidth, Qt::PenStyle penStyle,
=======
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
>>>>>>> Doxygen documentation, fixed polygon/polyline/line move
               Qt::PenCapStyle capStyle, Qt::PenJoinStyle joinStyle, Qt::GlobalColor brushColor,
               Qt::BrushStyle brushStyle)
                :Ellipse(ID, sPoint, axis, axis, penColor, penWidth, penStyle, capStyle, joinStyle, brushColor, brushStyle){}

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
};

#endif // CIRCLE_H
