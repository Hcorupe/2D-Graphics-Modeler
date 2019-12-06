#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "shape.h"

/*!
 * \brief The Ellipse class inherits from Shape class
 */
class Ellipse : public Shape
{
      public:
        /*!
         * \brief Default constructor
         */
        Ellipse()
        {
            a = 0;
            b = 0;
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
         * \param major
         * \param minor
         */
        Ellipse(int ID, QPoint sPoint, Qt::GlobalColor penColor, int penWidth, Qt::PenStyle penStyle,
                Qt::PenCapStyle capStyle, Qt::PenJoinStyle joinStyle, Qt::GlobalColor brushColor,
                Qt::BrushStyle brushStyle, int major, int minor)
                    :Shape(ID, sPoint, penColor, penWidth, penStyle, capStyle, joinStyle, brushColor, brushStyle)
        {
            a = major;
            b = minor;
        }

        /*!
         * \brief Destructor
         */
        ~Ellipse() override {}

        /*!
         * \brief Draws ellipse
         * \param device
         */
        void draw(QPaintDevice* device) override
        {
            painter.begin(device);
            painter.setPen(getPen());
            painter.setBrush(brush);

            painter.drawEllipse(getStartPoint().rx(), getStartPoint().ry(),a,b);
            painter.end();
        }

        /*!
         * \brief setMajorAxisA sets the ellipse's major axis length
         * \param a_Value
         */
        virtual void setMajorAxisA(const int a_Value)
        {
            a = a_Value;
        }

        /*!
         * \brief setMinorAxisB sets the ellipse's minor axis length
         * \param b_Value
         */
        virtual void setMinorAxisB(const int b_Value)
        {
            b = b_Value;
        }

        /*!
         * \brief GetArea gets the ellipse's area
         * \return double area
         */
        double GetArea() override
        {
            return M_PI * a * b;
        }

        /*!
         * \brief GetPerimeter gets the ellipse's perimeter
         * \return double perimeter
         */
        double GetPerimeter() override
        {
            return 2 * M_PI * (pow(((pow(a,2) + pow(b,2))/2), 0.5));
        }

        /*!
         * \brief getMajorAxisA gets the major axis length
         * \return int major axis length
         */
        int getMajorAxisA()
        {
            return a;
        }

        /*!
         * \brief getMinorAxisB gets the minor axis length
         * \return int minor axis length
         */
        int getMinorAxisB()
        {
            return b;
        }

        SHAPE getShapeType() override
        {
            return ELLIPSE;
        }

        const char* GetShapeTypeString() override
        {
            return "Ellipse";
        }

      private:
        //! Major axis length
        int a;
        //! Minor axis length
        int b;
};



#endif // ELLIPSE_H
