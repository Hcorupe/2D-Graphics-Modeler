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

using namespace Qt;   // namespace for qt stuff
using namespace std; // namespace for vector 

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



#endif // SHAPES_H
