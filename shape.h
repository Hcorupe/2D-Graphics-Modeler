#ifndef SHAPES_H
#define SHAPES_H

#include <QDebug>
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QWidget>
#include <math.h>
#include <QString>
#include <QPaintDevice>

using namespace Qt;
using namespace std;

namespace myShape{

class Shape
{
    public:
        QPainter painter;

        Shape()
        {
            pen.setColor(black);
            pen.setWidth(1);
            pen.setStyle(SolidLine);
            pen.setCapStyle(SquareCap);
            pen.setJoinStyle(BevelJoin);
            brush.setColor(black);
            brush.setStyle(SolidPattern);
        }

        virtual ~Shape()
        {

        }

        void setShapeId(int num) {
            shape_ID = num;
        }
        int getShapeId() {
            return shape_ID;
        }
        void setPenWidth(int w)
        {
            pen.setWidth(w);
        }

        void setPenColor(string color)
        {
            if(color == "black")
            {
              pen.setColor(black);
            }
            else if(color == "white")
            {
                pen.setColor(white);
            }
            else if(color == "red")
            {
                pen.setColor(red);
            }
            else if(color == "green")
            {
                pen.setColor(green);
            }
            else if(color == "blue")
            {
                pen.setColor(blue);
            }
            else if(color == "cyan")
            {
                pen.setColor(cyan);
            }
            else if(color == "magenta")
            {
                pen.setColor(magenta);
            }
            else if(color == "yellow")
            {
                pen.setColor(yellow);
            }
            else if(color == "gray")
            {
                pen.setColor(gray);
            }
            else
            {
                pen.setColor(black);
            }
        }
        void setPenColor(int color)
        {
            switch(color)
            {
            case 0: pen.setColor(black);
                break;
            case 1: pen.setColor(white);
                break;
            case 2: pen.setColor(red);
                break;
            case 3: pen.setColor(green);
                break;
            case 4: pen.setColor(blue);
                break;
            case 5: pen.setColor(cyan);
                break;
            case 6: pen.setColor(magenta);
                break;
            case 7: pen.setColor(yellow);
                break;
            case 8: pen.setColor(gray);
                break;
            default: pen.setColor(black);
            }
        }

        void setPenStyle(string pStyle)
        {
            if(pStyle == "SolidLine")
            {
                pen.setStyle(SolidLine);
            }
            else if(pStyle == "DashLine")
            {
                pen.setStyle(DashLine);
            }
            else if(pStyle == "DotLine")
            {
                pen.setStyle(DotLine);
            }
            else if(pStyle == "DashDotLine")
            {
                pen.setStyle(DashDotLine);
            }
            else
            {
                pen.setStyle(SolidLine);
            }
        }
        void setPenStyle(int pStyle)
        {
            switch(pStyle)
            {
            case 0: pen.setStyle(SolidLine);
                break;
            case 1: pen.setStyle(DashLine);
                break;
            case 2: pen.setStyle(DotLine);
                break;
            case 3: pen.setStyle(DashDotLine);
                break;
            case 4: pen.setStyle(DashDotDotLine);
                break;
            default: pen.setStyle(SolidLine);
            }
        }
        void setPenCapStyle(string cap)
        {
            if (cap == "FlatCap")
            {
                pen.setCapStyle(FlatCap);
            }
            else if (cap == "SquareCap")
            {
               pen.setCapStyle(SquareCap);
            }
            else if(cap == "RoundCap")
            {
                pen.setCapStyle(RoundCap);
            }
            else
            {

            }
        }

        void setPenCapStyle(int cap)
        {
            switch(cap)
            {
            case 0: pen.setCapStyle(FlatCap);
                break;
            case 1: pen.setCapStyle(SquareCap);
                break;
            case 2: pen.setCapStyle(RoundCap);
                break;
            default: pen.setCapStyle(FlatCap);
            }
        }


        void setPenJoinStyle(string join)
        {
            if(join == "MiterJoin")
            {
                pen.setJoinStyle(MiterJoin);
            }
            else if(join == "BevelJoin")
            {
                pen.setJoinStyle(BevelJoin);
            }
            else if(join == "RoundJoin")
            {
                pen.setJoinStyle(RoundJoin);
            }
            else
            {
                pen.setJoinStyle(MiterJoin);
            }
        }
        void setPenJoinStyle(int join)
        {
            switch(join)
            {
            case 0: pen.setJoinStyle(MiterJoin);
                break;
            case 1: pen.setJoinStyle(BevelJoin);
                break;
            case 2: pen.setJoinStyle(RoundJoin);
                break;
            default: pen.setJoinStyle(MiterJoin);
            }
        }

        void setBrushColor(string color)
        {
            if(color == "black")
            {
              brush.setColor(black);
            }
            else if(color == "white")
            {
                brush.setColor(white);
            }
            else if(color == "red")
            {
                brush.setColor(red);
            }
            else if(color == "green")
            {
                brush.setColor(green);
            }
            else if(color == "blue")
            {
                brush.setColor(blue);
            }
            else if(color == "cyan")
            {
                brush.setColor(cyan);
            }
            else if(color == "magenta")
            {
                brush.setColor(magenta);
            }
            else if(color == "yellow")
            {
                brush.setColor(yellow);
            }
            else if(color == "gray")
            {
                brush.setColor(gray);
            }
            else
            {
                brush.setColor(black);
            }
        }
        void setBrushColor(int color)
        {
            switch(color)
            {
            case 0: brush.setColor(black);
                break;
            case 1: brush.setColor(white);
                break;
            case 2: brush.setColor(red);
                break;
            case 3: brush.setColor(green);
                break;
            case 4: brush.setColor(blue);
                break;
            case 5: brush.setColor(cyan);
                break;
            case 6: brush.setColor(magenta);
                break;
            case 7: brush.setColor(yellow);
                break;
            case 8: brush.setColor(gray);
                break;
            default: brush.setColor(black);
            }
        }

        void setBrushStyle(string bStyle)
        {
            if(bStyle == "NoBrush")
            {
                brush.setStyle(NoBrush);
            }
            else if(bStyle == "SolidPattern")
            {
                brush.setStyle(SolidPattern);
            }
            else if(bStyle == "HorPattern")
            {
                brush.setStyle(HorPattern);
            }
            else if (bStyle == "VerPattern")
            {
                brush.setStyle(VerPattern);
            }
            else
            {
                brush.setStyle(NoBrush);
            }
        }
        void setBrushStyle(int bStyle)
        {
            switch(bStyle)
            {
            case 0: brush.setStyle(NoBrush);
                break;
            case 1: brush.setStyle(SolidPattern);
                break;
            case 2: brush.setStyle(HorPattern);
                break;
            case 3: brush.setStyle(VerPattern);
                break;
            default: brush.setStyle(NoBrush);
            }
        }

        QPen getPen()
        {
            return pen;
        }

        virtual int GetArea()
        {
            return 0;
        }

        virtual int GetPerimeter()
        {
            return 0;
        }

        
        virtual void draw(QPaintDevice* device)
       {

       }

        virtual void move(int x1, int x2)
       {

       }


        QPen pen;
        QBrush brush;

    private:
            int shape_ID;

};


class Line : public Shape
{
        public:
        Line()
        {
            startPoint.setX(0);
            startPoint.setY(0);
            endPoint.setX(0);
            endPoint.setY(0);
        }
        ~Line()
        {

        }

        virtual void draw(QPaintDevice* device)
        {
            painter.begin(device);
            painter.setPen(pen);
            painter.setBrush(brush);
            painter.drawLine(startPoint,endPoint);
            painter.end();
        }
        virtual void move(int x, int y)
        {
            int offsetX = x - getStartpointX();
            int offsetY = y - getStartpointY();

            setStartpoint(x,y);
            setEndpoint(getEndpointX()+offsetX, getEndpointY()+offsetY);
        }

        void setStartpoint(int xCoor, int yCoor)
        {
            startPoint.setX(xCoor);
            startPoint.setY(yCoor);
        }
        void setEndpoint(int xCoor, int yCoor)
        {
            endPoint.setX(xCoor);
            endPoint.setY(yCoor);
        }

       
        int getEndpointX()
        {
            return endPoint.x();
        }
        int getEndpointY()
        {
           return endPoint.y();
        }
        int getStartpointX() {
            return startPoint.x();
        }
        int getStartpointY() {
            return startPoint.y();
        }
        virtual int GetArea()
        {
            return 0;
        }
        virtual int GetPerimeter()
        {
            return 0;
        }

        private:
        QPoint startPoint;
        QPoint endPoint;
};

class polyline: public Shape
{
    public:
        polyline()
        {
            pointList = new QPointF[5];
            pointCount = 0;
        }
        ~polyline()
        {
            delete [] pointList;
        }


        void addPoint(int x,int y)
        {
            pointList[pointCount].setX(x);
            pointList[pointCount].setY(y);
            pointCount++;
        }


        virtual void draw(QPaintDevice *device)
        {
            painter.begin(device);
            painter.setPen(getPen());
            painter.setBrush(brush);

            painter.drawPolyline(pointList, pointCount);
            painter.end();
        }

        virtual void move(int x, int y) {
            int offsetX = x - pointList[0].x();
            int offsetY = y - pointList[0].y();

            bool firstPoint = false;
            for (int i = 0; i < pointCount; ++i) {
                pointList[i].setX(pointList[i].x()+offsetX);
                pointList[i].setY(pointList[i].y()+offsetY);
            }
        }

    private:
        QPointF *pointList;
        vector <QPoint> qPt;
        int pointCount;
};

class Square : public Shape
{
      public:
        Square()
        {
           length = 0;
        }
        ~Square()
        {

        }

        virtual void draw(QPaintDevice* device)
        {
            painter.begin(device);
            painter.setPen(getPen());
            painter.setBrush(brush);

            painter.drawRect(startPoint.rx(),startPoint.ry(),length,length);
            painter.end();
        }

        virtual void move(int xCoor, int yCoor)
        {
            setCenterpoint(xCoor, yCoor);
        }

        void setCenterpoint(int xCoor, int yCoor)
        {
            startPoint.setX(xCoor);
            startPoint.setY(yCoor);
        }

        void setLength(int lValue)
        {
            length = lValue;
        }

        virtual int GetArea()
        {
            return (int)(pow(length, 2));
        }

        virtual int GetPerimeter()
        {
            return 4 * length;
        }


        int getLength()
        {
            return length;
        }

        private:
        QPoint startPoint;
        int length;

};

class ellipse : public Shape
{
      public:
        ellipse()
        {
            a = 0;
            b = 0;
        }
        ~ellipse()
        {

        }

        virtual void draw(QPaintDevice* device)
        {
            painter.begin(device);
            painter.setPen(getPen());
            painter.setBrush(brush);

            painter.drawEllipse(startPoint.rx(), startPoint.ry(),a,b);
            painter.end();
        }

        virtual void move(int xCoor, int yCoor)
        {
            setCenterpoint(xCoor, yCoor);
        }

        void setCenterpoint(int xCoor, int yCoor)
        {
            startPoint.setX(xCoor);
            startPoint.setY(yCoor);
        }

        void setACoordinate(int aValue)
        {
            a = aValue;
        }
        void setBCoordinate(int bValue)
        {
            b = bValue;
        }

        virtual int GetArea()
        {
            return M_PI * a * b;
        }

        virtual int GetPerimeter()
        {
            return (int)(2 * M_PI * (pow(((pow(a,2) + pow(b,2))/2), 0.5)));
        }
        int getACoordinate()
        {
            return a;
        }
        int getBCoordinate()
        {
            return b;
        }


      private:
        QPoint startPoint;
        int a;
        int b;
};

class Circle : public Shape
{
      public:
        Circle()
        {

        }
        ~Circle()
        {

        }

        virtual void draw(QPaintDevice *device)
        {
            painter.begin(device);
            painter.setPen(getPen());
            painter.setBrush(brush);

            painter.drawEllipse(startPoint.rx(), startPoint.ry(),radius,radius);
            painter.end();
        }

        virtual void move(int xCoor, int yCoor)
        {
            setCenterpoint(xCoor, yCoor);
        }

        void setCenterpoint(int xCoor, int yCoor)
        {
            startPoint.setX(xCoor);
            startPoint.setY(yCoor);
        }
        void setRadius(int r)
        {
            radius = r;
        }

        virtual int GetArea()
        {
            return (int)(M_PI * (pow(radius, 2)));
        }

        virtual int GetPerimeter()
        {
            return (int)(2 * M_PI * radius);
        }

        int getRadius()
        {
            return radius;
        }

      private:
        QPoint startPoint;
        int radius;
 };

class rectangle : public Shape
{
      public:

        rectangle()
        {

        }
        ~rectangle()
        {

        }

        virtual void draw(QPaintDevice* device)
        {
            painter.begin(device);
            painter.setPen(getPen());
            painter.setBrush(brush);

            painter.drawRect(startPoint.rx(),startPoint.ry(),width,length);
            painter.end();
        }

        virtual void move(int xCoor, int yCoor)
        {
            setCenterpoint(xCoor, yCoor);
        }

        void setCenterpoint(int xCoor, int yCoor)
        {
            startPoint.setX(xCoor);
            startPoint.setY(yCoor);
        }
        void setLength(int lValue)
        {
            length = lValue;
        }
        void setWidth(int wValue)
        {
            width = wValue;
        }

        virtual int GetArea()
        {
            return (int)(pow(length, 2));
        }
        virtual int GetPerimeter()
        {
            return 2 * (length+width);
        }

        int getCenterPointX()
        {
            return startPoint.rx();
        }
        int getCenterPointY()
        {
            return startPoint.ry();
        }

        int getLength()
        {
            return length;
        }
        int getWidth()
        {
            return width;
        }

      private:
        QPoint startPoint;
        int length;
        int width;
};

class Text : public Shape
{
    public:
        Text()
        {

        }
        ~Text()
        {

        }

        virtual void draw(QPaintDevice* device)
        {
            painter.begin(device);
            painter.setPen(getPen());
            painter.drawText(getCenterPointX(),getCenterPointY(),getLength(),getWidth(),fontAlignment, textString);
            painter.end();
        }

        virtual void move(int xCoor, int yCoor)
        {
            setCenterpoint(xCoor, yCoor);
        }

        int getCenterPointX()
        {
            return startPoint.rx();
        }
        int getCenterPointY()
        {
            return startPoint.ry();
        }

        int getLength()
        {
            return length;
        }
        int getWidth()
        {
            return width;
        }

        void setCenterpoint(int xCoor, int yCoor)
        {
            startPoint.setX(xCoor);
            startPoint.setY(yCoor);
        }
        void setLength(int lValue)
        {
            length = lValue;
        }
        void setWidth(int wValue)
        {
            width = wValue;
        }
        void setTextString(string text)
        {
            textString = QString::fromStdString(text);
        }

        void setTextAlignment(int align)
        {
            fontAlignment = align;
        }

        void setTextPointSize(int pointSize)
        {
            font.setPointSize(pointSize);
        }

        void setTextFontFamily(string fontFamily)
        {
            if(fontFamily == "Comic Sans MS")
            {
                font.setFamily(QString("Comic Sans MS"));
            }
            else if(fontFamily == "Courier")
            {
                font.setFamily("Courier");
            }
            else if(fontFamily == "Helvetica")
            {
                font.setFamily("Helvetica");
            }
            else if(fontFamily == "Times")
            {
                font.setFamily("Times");
            }
            else
            {
                font.setFamily(QString("Comic Sans MS"));
            }

        }
        void setTextFontFamily(int fontFamily)
        {
            switch(fontFamily)
            {
            case 0: font.setFamily(QString("Comic Sans MS"));
                break;
            case 1: font.setFamily("Courier");
                break;
            case 2: font.setFamily("Helvetica");
                break;
            case 3: font.setFamily("Times");
                break;
            default: font.setFamily(QString("Comic Sans MS"));
            }
        }

        void setTextFontStyle(string fontStyle)
        {
            if(fontStyle == "StyleNormal")
            {
                font.setStyle(QFont::StyleNormal);
            }
            else if(fontStyle == "StyleItalic")
            {
                font.setStyle(QFont::StyleItalic);
            }
            else if(fontStyle == "StyleOblique")
            {
                font.setStyle(QFont::StyleOblique);
            }
            else
            {
                font.setStyle(QFont::StyleNormal);
            }
        }
        void setTextFontStyle(int fontStyle)
        {
            switch(fontStyle)
            {
            case 0: font.setStyle(QFont::StyleNormal);
                break;
            case 1: font.setStyle(QFont::StyleItalic);
                break;
            case 2: font.setStyle(QFont::StyleOblique);
                break;
            default: font.setStyle(QFont::StyleNormal);
            }
        }

        void setTextFontWeight(string fontWeight)
        {
            if(fontWeight == "Thin")
            {
                font.setWeight(QFont::Thin);
            }
            else if(fontWeight == "Light")
            {
                font.setWeight(QFont::Light);
            }
            else if(fontWeight == "Normal")
            {
                font.setWeight(QFont::Normal);
            }
            else if(fontWeight == "Bold")
            {
                font.setWeight(QFont::Bold);
            }
            else
            {
                font.setWeight(QFont::Thin);
            }
        }

        void setTextFontWeight(int fontWeight)
        {
            switch(fontWeight)
            {
            case 0: font.setWeight(QFont::Thin);
                break;
            case 1: font.setWeight(QFont::Light);
                break;
            case 2: font.setWeight(QFont::Normal);
                break;
            case 3: font.setWeight(QFont::Bold);
                break;
            default: font.setWeight(QFont::Thin);
            }
        }

    private:
        int fontAlignment;
        QString textString;
        QFont font;
        QPoint startPoint;
        int length;
        int width;
};

class polygon: public Shape
{
    public:
        polygon() : Shape()
        {
            pointList = new QPointF[5];
            pointCount = 0;
        }
        ~polygon()
        {
            delete [] pointList;
        }

        void addPoint(int x,int y)
        {
            pointList[pointCount].setX(x);
            pointList[pointCount].setY(y);
            pointCount++;
        }

        void initializeList()
        {
            for(int i = 0; i < pointCount; i++)
            {
                qPt[i].setX(pointList[i].rx());
                qPt[i].setY(pointList[i].ry());
            }
        }

        void draw(QPaintDevice *device)
        {
            {
                painter.begin(device);
                painter.setPen(getPen());
                painter.setBrush(brush);

                painter.drawPolygon(pointList, pointCount);
                painter.end();
            }
        }
        void move(int x, int y) {
            int offsetX = x - pointList[0].x();
            int offsetY = y - pointList[0].y();

            bool firstPoint = false;
            for (int i = 0; i < pointCount; ++i) {
                pointList[i].setX(pointList[i].x()+offsetX);
                pointList[i].setY(pointList[i].y()+offsetY);
            }
        }

        virtual int GetPerimeter() {
            int perimeter = 0;
            for (int i = 0; i < pointCount; ++i) {
                perimeter += sqrt(pow(pointList[i+1].x()-pointList[i].x(),2) + pow(pointList[i+1].y()-pointList[i].y(),2));
                if(i == (pointCount - 1)) {
                    perimeter += sqrt(pow(pointList[0].x()-pointList[i].x(),2) + pow(pointList[0].y() - pointList[i].y(),2));
                }
            }
            return perimeter;
        }
        virtual int GetArea() {
           int area = 0;
           for (int i = 0; i < pointCount; ++i) {
               area += ((pointList[i].x()*pointList[i+1].y()) - ((pointList[i].x()*pointList[i+1].y())));
               if(i == (pointCount-1)) {
                   area += ((pointList[i].x()*pointList[0].y()) - (pointList[i].y()*pointList[0].x()));
               }
           }
           return area;
        }

    private:
        QPointF *pointList;
        vector <QPoint> qPt;
        int pointCount;
};


}

#endif // SHAPES_H
