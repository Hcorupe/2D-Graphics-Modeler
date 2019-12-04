#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

//! Rectangle class
/*!
 * \brief The Rectangle class inherits from Shape class.
 */
class Rectangle : public Shape
{
      public:

        /*!
         * \brief Default constructor
         * Sets Rectangle's length and width to default values
         */
        Rectangle()
        {
            length = 10;
            width  = 10;
        }

        /*!
         * \brief Alternate constructor
         * \param ID
         * \param sPoint
         * \param l
         * \param w
         * \param penColor
         * \param penWidth
         * \param penStyle
         * \param capStyle
         * \param joinStyle
         * \param brushColor
         * \param brushStyle
         */
        Rectangle(int ID, QPoint sPoint,  int l, int w, Qt::GlobalColor penColor, int penWidth, Qt::PenStyle penStyle,
                  Qt::PenCapStyle capStyle, Qt::PenJoinStyle joinStyle, Qt::GlobalColor brushColor,
                  Qt::BrushStyle brushStyle)
                    :Shape(ID, sPoint, penColor, penWidth, penStyle, capStyle, joinStyle, brushColor, brushStyle)
        {
            length = l;
            width  = w;
        }

        //! Destructor
        ~Rectangle() override {}

        /*!
         * \brief Draws rectangle shape
         * \param device
         */
        void draw(QPaintDevice* device) override
        {
            painter.begin(device);
            painter.setPen(getPen());
            painter.setBrush(brush);

            painter.drawRect(getStartPoint().rx(),getStartPoint().ry(),width,length);
            painter.end();
        }

        /*!
         * \brief setLength sets rectangle's length
         * \param lValue
         */
        virtual void setLength(const int lValue)
        {
            length = lValue;
        }

        /*!
         * \brief setWidth sets rectangle's width
         * \param wValue
         */
        virtual void setWidth(const int wValue)
        {
            width = wValue;
        }

        /*!
         * \brief GetArea calculates rectangle's area
         * \return double area
         */
        double GetArea() override
        {
            return length * width;
        }

        /*!
         * \brief GetPerimeter calculates rectangle's perimeter
         * \return double perimeter
         */
        double GetPerimeter() override
        {
            return 2 * (length+width);
        }

        /*!
         * \brief getLength gets rectangle's length
         * \return int length
         */
        int getLength()
        {
            return length;
        }

        /*!
         * \brief getWidth gets rectangle's width
         * \return int width
         */
        int getWidth()
        {
            return width;
        }

        SHAPE getShapeType() override
        {
            return RECTANGLE;
        }

      private:
        /*!
         * \brief Rectangle's length
         */
        int length;
        /*!
         * \brief Rectangle's width
         */
        int width;
};



#endif // RECTANGLE_H
