#ifndef SHAPE_H
#define SHAPE_H

#include <QDebug>
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QWidget>
#include <math.h>
#include <QString>
#include <QPaintDevice>

//! Shape Base Class
/*!
    Abstract Base Class
*/
class Shape
{
    public:
        //! Public Painter variable
        /*!
         QPainter used to paint the shape.
         */
        QPainter painter;
        //! Public Pen variable
        /*!
         Pen used to draw the shape.
         */
        QPen pen;
        //! Public Brush Variable
        /*!
         Brush used to fill shape.
         */
        QBrush brush;

        //! Default constructor
        /*!
         Sets start point to (0,0),
         sets pen and brush to default settings.
         */
        Shape()
        {
            startPoint.setX(0);
            startPoint.setY(0);
            pen.setColor(Qt::black);
            pen.setWidth(1);
            pen.setStyle(Qt::SolidLine);
            pen.setCapStyle(Qt::SquareCap);
            pen.setJoinStyle(Qt::BevelJoin);
            brush.setColor(Qt::black);
            brush.setStyle(Qt::SolidPattern);
        }

        //! Alternate constructor
        /*!
         * \param ID int shapeID
         * \param sPoint QPoint start point
         * \param penColor Qt::GlobalColor pen color
         * \param penWidth int pen width
         * \param penStyle Qt::PenStyle pen style
         * \param capStyle Qt::PenCapStyle pen's cap style
         * \param joinStyle Qt::PenJoinStyle pen's join style
         * \param brushColor Qt::GlobalColor brush's color
         * \param brushStyle Qt::BrushStyle brush's style
         */
        Shape(int ID, QPoint sPoint, Qt::GlobalColor penColor, int penWidth, Qt::PenStyle penStyle,
              Qt::PenCapStyle capStyle, Qt::PenJoinStyle joinStyle, Qt::GlobalColor brushColor,
              Qt::BrushStyle brushStyle)
        {
            shapeID = ID;
            startPoint = sPoint;
            pen.setColor(penColor);
            pen.setWidth(penWidth);
            pen.setStyle(penStyle);
            pen.setCapStyle(capStyle);
            pen.setJoinStyle(joinStyle);
            brush.setColor(brushColor);
            brush.setStyle(brushStyle);
        }

        //! Virtual destructor
        virtual ~Shape(){}

        //! Overloaded < operator
        /*!
          Overloads < operator to compare shapeID's
         * \param RHS other Shape to compare to
         * \return Bool, returns true if shapeID < RHS's shapeID
         */
        bool operator < (const Shape& RHS)
        {
            return shapeID < RHS.shapeID;
        }

        //! Overloaded > operator
        /*!
          Overloads > operator to compare shapeID's
         * \param RHS other Shape to compare to
         * \return Bool, returns true if shapeID > RHS's shapeID
         */
        bool operator > (const Shape& RHS)
        {
            return shapeID > RHS.shapeID;
        }

        //! Overloaded == operator
        /*!
          Overloads == to compare shapeID's
         * \param RHS other Shape to compare to
         * \return Bool, returns true if shapeID == RHS's shapeID
         */
        bool operator == (const Shape& RHS)
        {
            return shapeID == RHS.shapeID;
        }

        //! Sets shapeID
        /*!
         * \param num
         */
        void setShapeId(const int num) {
            shapeID = num;
        }

        //! Sets penWidth
        /*!
         * \param w
         */
        void setPenWidth(const int w)
        {
            pen.setWidth(w);
        }

        //! Sets pen's color
        /*!
         * \param color
         */
        void setPenColor(const Qt::GlobalColor color)
        {
            pen.setColor(color);
        }

        //! Set pen's style
        /*!
         * \param pStyle
         */
        void setPenStyle(const Qt::PenStyle pStyle)
        {
            pen.setStyle(pStyle);
        }

        //! Set pen's cap style
        /*!
         * \param cap
         */
        void setPenCapStyle(const Qt::PenCapStyle cap)
        {
            pen.setCapStyle(cap);

        }

        //! Set pen's join style
        /*!
         * \param join
         */
        void setPenJoinStyle(const Qt::PenJoinStyle join)
        {
            pen.setJoinStyle(join);
        }

        //! Set brush's color
        /*!
         * \param color
         */
        void setBrushColor(const Qt::GlobalColor color)
        {
           brush.setColor(color);
        }

        //! Set brush's style
        /*!
         * \param bStyle
         */
        void setBrushStyle(const Qt::BrushStyle bStyle)
        {
            brush.setStyle(bStyle);
        }

        //! Set shape's start point
        /*!
         * \param sPoint
         */
        void setStartPoint(const QPoint sPoint)
        {
            startPoint = sPoint;
        }

        /*!
         * \brief Gets shape's shapeID
         * \return int shapeID
         */
        int getShapeId()
        {
            return shapeID;
        }

        /*!
         * \brief Gets shape's pen
         * \return shape's QPen
         */
        QPen getPen()
        {
            return pen;
        }

        /*!
        * \brief Gets shape's brush
        * \return shape's QBrush
        */
        QBrush getBrush()
        {
            return brush;
        }

        //! Virtual function
        /*!
         * \brief Moves shape
         * \param point
         */
        virtual void move(QPoint point)
        {
            startPoint = point;
        }

        /*!
         * \brief Gets shape's start point
         * \return QPoint startPoint
         */
        virtual QPoint getStartPoint()
        {
            return startPoint;
        }

        //! Pure virtual function
        virtual double GetArea() = 0;

        //! Pure virtual function
        virtual double GetPerimeter() = 0;

        //! Pure virtual function
        virtual void draw(QPaintDevice* device) = 0;

    private:
            //! Private int variable
            int shapeID;
            //! Private QPoint variable
            /*!
             * \brief Shape's top left corner
             */
            QPoint startPoint;

};

#endif // SHAPE_H
