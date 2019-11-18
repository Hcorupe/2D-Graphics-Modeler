#ifndef TEXT_H
#define TEXT_H

#include "shape.h"

class Text: public Shape
{
    public:

        Text()
        {
            message = "Text";
            width   = 15;
            height  = 10;
            font.setFamily("Times");
            font.setStyle(QFont::StyleNormal);
            font.setWeight(QFont::Normal);
            font.setPointSize(10);
            alignment = Qt::AlignCenter;

        }

        ~Text() {}

        virtual void draw(QPaintDevice *device)
        {
            painter.begin(device);
            painter.setPen(getPen());
            painter.setFont(font);

            painter.drawText(getStartPoint().rx(), getStartPoint().ry(),width,height, alignment, message);
            painter.end();
        }

        void setFontFamily(QString family)
        {
            font.setFamily(family);
        }

        void setStyle(QFont::Style style)
        {
            font.setStyle(style);
        }

        void setWeight(QFont::Weight weight)
        {
            font.setWeight(weight);
        }

        void setPointSize(int size)
        {
            font.setPointSize(size);
        }

        void setAlignment(Qt::Alignment align)
        {
            alignment = align;
        }

    private:
        QFont font;
        Qt::Alignment alignment;
        int width;
        int height;
        QString message;

};

#endif // TEXT_H
