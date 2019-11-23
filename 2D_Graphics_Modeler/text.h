#ifndef TEXT_H
#define TEXT_H

#include "shape.h"

class Text: public Shape
{
    public:

        Text()
        {
            message = "Text";
            width   = 500;
            length  = 500;
            font.setFamily("Times");
            font.setStyle(QFont::StyleNormal);
            font.setWeight(QFont::Normal);
            font.setPointSize(10);
            alignment = Qt::AlignCenter;


        }

        Text(int ID, QPoint sPoint, int l, int w, QString text, Qt::GlobalColor color, Qt::Alignment align,
             int pointSize, QString family, QFont::Style style, QFont::Weight weight)
                :Shape(ID, sPoint, color, 0, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin, Qt::white,
                       Qt::SolidPattern)
        {
            length = l;
            width  = w;
            message = text;
            alignment = align;
            font.setPointSize(pointSize);
            font.setFamily(family);
            font.setStyle(style);
            font.setWeight(weight);
        }

        ~Text() {}

        virtual void draw(QPaintDevice *device)
        {
            painter.begin(device);
            painter.setPen(getPen());
            painter.setFont(font);

            painter.drawText(getStartPoint().rx(), getStartPoint().ry(), width, length, alignment, message);
            painter.end();
        }

        void setFontFamily(const QString family)
        {
            font.setFamily(family);
        }

        void setStyle(const QFont::Style style)
        {
            font.setStyle(style);
        }

        void setWeight(const QFont::Weight weight)
        {
            font.setWeight(weight);
        }

        void setPointSize(const int size)
        {
            font.setPointSize(size);
        }

        void setAlignment(const Qt::Alignment align)
        {
            alignment = align;
        }

        double GetArea()
        {
            return 0;
        }

        double GetPerimeter()
        {
            return 0;
        }

    private:
        QFont font;
        Qt::Alignment alignment;
        int length;
        int width;
        QString message;

};

#endif // TEXT_H
