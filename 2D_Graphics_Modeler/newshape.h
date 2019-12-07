#ifndef NEWSHAPE_H
#define NEWSHAPE_H

#include <QDialog>
#include <QComboBox>
#include "shape.h"
#include "rectangle.h"
#include "square.h"
#include "ellipse.h"
#include "circle.h"
#include "line.h"
#include "polygon.h"
#include "polyline.h"
#include "text.h"
#include "vector.h"
#include "renderarea.h"

namespace Ui {
class NewShape;
}

class NewShape : public QDialog
{
    Q_OBJECT

    enum SHAPE_TYPE
    {
     RECTANGLE, SQUARE,
     ELLIPSE, CIRCLE,
     LINE, POLYLINE,
     POLYGON, TEXT
    };

    enum COLORS
    {
     BLACK, WHITE,
     RED, GREEN,
     BLUE, CYAN,
     MAGENTA, YELLOW,
     GRAY
    };

    enum PEN_STYLE
    {
        SOLID_LINE,
        DASH_LINE, DOT_LINE,
        DASH_DOT_LINE,
        DASH_DOT_DOT_LINE,
        NO_PEN
    };

    enum JOIN_STYLE
    {
        MITER,
        BEVEL,
        ROUND
    };

    enum CAP_STYLE
    {
        FLAT,
        SQUARE_CAP,
        ROUND_CAP
    };

    enum BRUSH_STYLE
    {
        SOLID,
        HOR,
        VER,
        NO_BRUSH
    };

    enum FONT_STYLE
    {
        NORMAL,
        ITALIC,
        OBLIQUE
    };

    enum FONT_WEIGHT
    {
        NORMAL_W,
        LIGHT,
        THIN,
        BOLD
    };

    enum ALIGNMENT
    {
        LEFT,
        RIGHT,
        TOP,
        BOTTOM,
        CENTER
    };

public:
    explicit NewShape(myStd::vector<int> ids, QWidget *parent = nullptr);
    ~NewShape();

    void enableDimensions(bool);
    void enableWidth(bool);
    void enableStartPoint(bool);
    void enableEndPoint(bool);
    void enableText(bool);
    void enablePen(bool);
    void enableBrush(bool);
    void enablePoly(bool);

    Qt::GlobalColor readColor(int);

private slots:
    void on_shapeTypeComboBox_currentIndexChanged(int index);

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_shapeIDSpinBox_valueChanged(int arg1);

    void on_xSpinBox_valueChanged(int arg1);

    void on_ySpinBox_valueChanged(int arg1);

    void on_lSpinBox_valueChanged(int arg1);

    void on_wSpinBox_valueChanged(int arg1);

    void on_xEndSpinBox_valueChanged(int arg1);

    void on_yEndSpinBox_valueChanged(int arg1);

    void on_penColorComboBox_currentIndexChanged(int index);

    void on_penStyleComboBox_currentIndexChanged(int index);

    void on_penJoinComboBox_currentIndexChanged(int index);

    void on_capStyleComboBox_currentIndexChanged(int index);

    void on_penWidthSpinBox_valueChanged(int arg1);

    void on_brushColorComboBox_currentIndexChanged(int index);

    void on_brushStyleComboBox_currentIndexChanged(int index);

    void on_textEdit_textChanged(const QString &arg1);

    void on_pointSizeSpinBox_valueChanged(int arg1);

    void on_textColorComboBox_currentIndexChanged(int index);

    void on_fontFamilyComboBox_currentIndexChanged(const QString &arg1);

    void on_fontStyleComboBox_currentIndexChanged(int index);

    void on_fontWeightComboBox_currentIndexChanged(int index);

    void on_alignmentComboBox_currentIndexChanged(int index);

    void on_addPointButton_clicked();

signals:
    void sendShape(Shape*, Text*);

private:
    Ui::NewShape *ui;

    // Shape variables
    Shape* shape;

    myStd::vector<QPoint> points;

    SHAPE_TYPE shapeType;
    int id;
    QPoint sPoint;
    QPoint ePoint;
    int length;
    int width;

    // Pen variables
    int penWidth;
    Qt::GlobalColor penColor;
    Qt::PenStyle penStyle;
    Qt::PenCapStyle capStyle;
    Qt::PenJoinStyle joinStyle;

    // Brush variables
    Qt::GlobalColor brushColor;
    Qt::BrushStyle brushStyle;

    // Text variables
    QString text;
    int pointSize;
    Qt::GlobalColor textColor;
    QString fontFamily;
    QFont::Style fontStyle;
    QFont::Weight fontWeight;
    Qt::AlignmentFlag alignment;

    // List of current shape IDs used to
    // prevent duplicate shapeIDs in new shapes
    myStd::vector<int> idList;
    bool idTaken;









};

#endif // NEWSHAPE_H
