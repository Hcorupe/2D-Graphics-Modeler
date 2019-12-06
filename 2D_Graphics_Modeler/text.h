#ifndef TEXT_H
#define TEXT_H

#include "shape.h"
/*!
 * \brief The Text class inherits from Shape class.
 */
class Text: public Shape
{
    public:

        //! Default constructor
        Text()
        {
            message = "Text";
            width   = 500;
            height  = 500;
            font.setFamily("Times");
            font.setStyle(QFont::StyleNormal);
            font.setWeight(QFont::Normal);
            font.setPointSize(10);
            alignment = Qt::AlignCenter;
        }

        /*!
         * \brief Alternate constructor
         * \param ID
         * \param sPoint
         * \param w
         * \param h
         * \param text
         * \param color
         * \param align
         * \param pointSize
         * \param family
         * \param style
         * \param weight
         */
        Text(int ID, QPoint sPoint, int w, int h, QString text, Qt::GlobalColor color, Qt::AlignmentFlag align,
             int pointSize, QString family, QFont::Style style, QFont::Weight weight)
                :Shape(ID, sPoint, color, 0, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin, Qt::white,
                       Qt::SolidPattern)
        {
            height = h;
            width  = w;
            message = text;
            alignment = align;
            font.setPointSize(pointSize);
            font.setFamily(family);
            font.setStyle(style);
            font.setWeight(weight);
        }

        //! Destructor
        ~Text() override {}

        void draw(QPaintDevice *device) override
        {
            painter.begin(device);
            painter.setPen(getPen());
            painter.setFont(font);

            painter.drawText(getStartPoint().rx(), getStartPoint().ry(), width, height, alignment, message);
            painter.end();
        }

        /*!
         * \brief setFontFamily sets text font family
         * \param family
         */
        void setFontFamily(const QString family)
        {
            font.setFamily(family);
        }

        /*!
         * \brief setStyle sets text style
         * \param style
         */
        void setStyle(const QFont::Style style)
        {
            font.setStyle(style);
        }

        /*!
         * \brief setWeight sets text weight
         * \param weight
         */
        void setWeight(const QFont::Weight weight)
        {
            font.setWeight(weight);
        }

        /*!
         * \brief setPointSize sets text point size
         * \param size
         */
        void setPointSize(const int size)
        {
            font.setPointSize(size);
        }

        /*!
         * \brief setAlignment sets text alignment
         * \param align
         */
        void setAlignment(const Qt::AlignmentFlag align)
        {
            alignment = align;
        }

        /*!
         * \brief GetArea returns 0 (Text has no area)
         * \return 0
         */
        double GetArea() override
        {
            return 0;
        }

        /*!
         * \brief GetPerimeter returns 0 (Text has no perimeter)
         * \return 0
         */
        double GetPerimeter() override
        {
            return 0;
        }

        /*!
         * \brief GetFont returns font
         * \return Qfont
         */
        QFont getFont()
        {
            return font;
        }

        /*!
         * \brief getFontFamily returns font family
         * \return QString
         */
        QString getFontFamily()
        {
            return font.family();
        }

        /*!
         * \brief getFontStyle returns font style
         * \return QFont::Style
         */
        QFont::Style getFontStyle()
        {
            return font.style();
        }

        QFont::Weight getWeight()
        {
            switch(font.weight())
            {
            case 0:
                return QFont::Thin;
            case 25:
                return QFont::Light;
            case 50:
                return QFont::Normal;
            case 75:
                return QFont::Bold;
            }
        }

        /*!
         * \brief getAlignment returns text alignment
         * \return AlignmentFlag
         */
        Qt::AlignmentFlag getAlignment()
        {
            return alignment;
        }

        /*!
         * \brief getPointSize returns point size
         * \return
         */
        int getPointSize()
        {
            return font.pointSize();
        }

        /*!
         * \brief getWidth returns text box width
         * \return int
         */
        int getWidth()
        {
            return width;
        }

        /*!
         * \brief getHeight returns text box height
         * \return int
         */
        int getHeight()
        {
            return height;
        }

        /*!
         * \brief getMessage returns text message
         * \return Qstring
         */
        QString getMessage()
        {
            return message;
        }

        /*!
         * \brief getShapeType returns shape type
         * \return SHAPE enum
         */
        SHAPE getShapeType() override
        {
            return TEXT;
        }

        const char* GetShapeTypeString() override
        {
            return "Text";
        }

    private:
        //! Text font
        QFont font;
        //! Text alignment
        Qt::AlignmentFlag alignment;
        //! Text box height
        int height;
        //! Text box width
        int width;
        //! Text contents
        QString message;

};

#endif // TEXT_H
