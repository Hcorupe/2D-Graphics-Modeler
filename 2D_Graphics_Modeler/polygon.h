#ifndef POLYGON_H
#define POLYGON_H

#include "shape.h"
#include "vector.h"

/*!
 * \brief The Polygon class inherits from Shape.
 */
class Polygon: public Shape
{
    public:

        //! Default constructor
        Polygon()
        {
            QPoint p1(0,0);
            QPoint p2(10,0);
            QPoint p3(5,10);
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
         * \param brushColor
         * \param brushStyle
         */
        Polygon(int ID, myStd::vector<QPoint> newPoints, Qt::GlobalColor penColor, int penWidth, Qt::PenStyle penStyle,
                Qt::PenCapStyle capStyle, Qt::PenJoinStyle joinStyle, Qt::GlobalColor brushColor,
                Qt::BrushStyle brushStyle)
                :Shape(ID, *(newPoints.begin()), penColor, penWidth, penStyle, capStyle, joinStyle, brushColor, brushStyle)
        {
            points = newPoints;
        }

        //! Destructor
        ~Polygon() override {}

        /*!
         * \brief draws polygon
         * \param device
         */
        void draw(QPaintDevice *device) override
        {
            painter.begin(device);
            painter.setPen(getPen());

            painter.drawPolygon(points.begin(), points.size());
            painter.end();
        }

        /*!
         * \brief moves polygon
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
         * \brief setPoints sets the vector of QPoints
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
         * \brief getPoints returns vector of QPoints
         * \return QPoint vector
         */
        myStd::vector<QPoint> getPoints()
        {
            return points;
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
            return POLYGON;
        }

        const char* GetShapeTypeString() override
        {
            return "Polygon";
        }

    private:
        /*!
         * \brief QVector of polygon points
         */
        myStd::vector<QPoint> points;
};

#endif // POLYGON_H
