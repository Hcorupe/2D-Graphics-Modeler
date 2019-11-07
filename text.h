#ifndef TEXT_H
#define TEXT_H

#include "shape.h"

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

#endif // TEXT_H
