#ifndef LINE_H
#define LINE_H

#include "shape.h"

/*!
 * \brief The Line class inherits from Shape.
 */
class Line : public Shape
{
    public:

        //! Default constructor
        Line()
        {
            endPoint.setX(0);
            endPoint.setY(0);
        }

        /*!
         * \brief Alternate constructor
         * \param ID
         * \param sPoint
         * \param ePoint
         * \param penColor
         * \param penWidth
         * \param penStyle
         * \param capStyle
         * \param joinStyle
         */
        Line(int ID, QPoint sPoint, QPoint ePoint, Qt::GlobalColor penColor, int penWidth, Qt::PenStyle penStyle,
             Qt::PenCapStyle capStyle, Qt::PenJoinStyle joinStyle)
                :Shape(ID, sPoint, penColor, penWidth, penStyle, capStyle, joinStyle, Qt::black, Qt::SolidPattern)
        {
            endPoint = ePoint;
        }

        //! Destructor
        ~Line() override {}

        /*!
         * \brief draws line
         * \param device
         */
        void draw(QPaintDevice* device) override
        {
            painter.begin(device);
            painter.setPen(getPen());

            painter.drawLine(getStartPoint(), endPoint);
            painter.end();
        }

        /*!
         * \brief moves line, start point is moved to point
         * \param point
         */
        void move(QPoint point) override
        {
            int xOffset;
            int yOffset;

            xOffset = point.x() - getStartPoint().x();
            yOffset = point.y() - getStartPoint().y();

            endPoint.setX(endPoint.x() + xOffset);
            endPoint.setY(endPoint.y() + yOffset);

            setStartPoint(point);

        }

        /*!
         * \brief getEndPoint gets end point
         * \return QPoint endPoint
         */
        QPoint getEndPoint()
        {
            return endPoint;
        }

        /*!
         * \brief setEndPoint sets end point
         * \param point
         */
        void setEndPoint(QPoint point)
        {
            endPoint = point;
        }

        /*!
         * \brief GetArea returns 0
         * \return 0
         */
        double GetArea() override
        {
            return 0;
        }

        /*!
         * \brief GetPerimeter returns 0
         * \return 0
         */
        double GetPerimeter() override
        {
            return 0;
        }

        SHAPE getShapeType() override
        {
            return LINE;
        }

        const char* GetShapeTypeString() override
        {
            return "Line";
        }

    private:
        /*!
         * \brief Point where line ends
         */
        QPoint endPoint;
};

#endif // LINE_H
