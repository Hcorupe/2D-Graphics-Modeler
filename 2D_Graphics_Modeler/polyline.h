#ifndef POLYLINE_H
#define POLYLINE_H

#include "shape.h"
#include "vector.h"

/*!
 * \brief The Polyline class inherits from Shape class.
 */
class Polyline: public Shape
{
    public:

        //! Default constructor
        Polyline()
        {
            QPoint p1(20,50);
            QPoint p2(250,100);
            QPoint p3(500,10);
            points.push_back(p1);
            points.push_back(p2);
            points.push_back(p3);
        }

        /*!
         * \brief Alternate constructor
         * \param ID
         * \param newPoints
         * \param penColor
         * \param penWidth
         * \param penStyle
         * \param capStyle
         * \param joinStyle
         */
        Polyline(int ID, myStd::vector<QPoint> newPoints, Qt::GlobalColor penColor, int penWidth, Qt::PenStyle penStyle,
                Qt::PenCapStyle capStyle, Qt::PenJoinStyle joinStyle)
                :Shape(ID, *(newPoints.begin()), penColor, penWidth, penStyle, capStyle, joinStyle, Qt::black, Qt::SolidPattern)
        {
            points = newPoints;
        }

        //! Destructor
        ~Polyline() override {}

        /*!
         * \brief draws the polyline
         * \param device
         */
        void draw(QPaintDevice *device) override
        {
            painter.begin(device);
            painter.setPen(getPen());

            painter.drawPolyline(points.begin(), points.size());
            painter.end();
        }

        /*!
         * \brief moves polyline
         * \param point
         */
        void move(QPoint point) override
        {
            int xOffset;
            int yOffset;

            xOffset = point.x() - points[0].x();
            yOffset = point.y() - points[0].y();

            for(int i = 0; i < points.size(); i++)
            {
                points[i].setX(points[i].x() + xOffset);
                points[i].setY(points[i].y() + yOffset);
            }
        }


        /*!
         * \brief setPoints sets the point vector of QPoints
         * \param newPoints
         */
        void setPoints(const myStd::vector<QPoint> newPoints)
        {
            points = newPoints;
        }

        /*!
         * \brief getStartPoint returns first point
         * \return QPoint points[0]
         */
        QPoint getStartPoint() override
        {
            return points[0];
        }

        /*!
         * \brief getPoints returns QPoint vector
         * \return QPoint vector of points
         */
        myStd::vector<QPoint> getPoints()
        {
            return points;
        }

        /*!
         * \brief GetArea returns 0 (Polyline has no area)
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
            return POLYLINE;
        }

        const char* GetShapeTypeString() override
        {
            return "Polyline";
        }

    private:
        /*!
         * \brief Vector of QPoints of polyline
         */
        myStd::vector<QPoint> points;

};

#endif // POLYLINE_H
