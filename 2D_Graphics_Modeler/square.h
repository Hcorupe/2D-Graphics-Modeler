#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"
#include "rectangle.h"

//! Square class
/*!
 * \brief The Square class inherits from Rectangle class.
 */
class Square : public Rectangle
{
      public:

        //! Default constructor
        Square()
        {
            setLength(0);
            setWidth(0);
        }

        //! Alternate constructor
        Square(int ID, QPoint sPoint, int side, Qt::GlobalColor penColor, int penWidth, Qt::PenStyle penStyle,
               Qt::PenCapStyle capStyle, Qt::PenJoinStyle joinStyle, Qt::GlobalColor brushColor,
               Qt::BrushStyle brushStyle)
                :Rectangle(ID, sPoint, side, side, penColor, penWidth, penStyle, capStyle, joinStyle, brushColor,
                           brushStyle) {}

        //! Destructor
        ~Square() override {}

        /*!
         * \brief setWidth sets the square's length and width
         * \param width
         */
        void setWidth(const int width) override
        {
            Rectangle::setLength(width);
            Rectangle::setWidth(width);
        }

        /*!
         * \brief setLength sets the square's length and width
         * \param length
         */
        void setLength(const int length) override
        {
            Rectangle::setLength(length);
            Rectangle::setWidth(length);
        }

        SHAPE getShapeType() override
        {
            return SQUARE;
        }

};


#endif // SQUARE_H
