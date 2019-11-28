#include <cassert>
#include "parser.h"

//! Default constructor
Parser::Parser()
{
    id = 0;
    shapeType.clear();
    x1 = 0;
    y1 = 0;
    x2 = 0;
    y2 = 0;
    x3 = 0;
    y3 = 0;
    x4 = 0;
    y4 = 0;
    l = 0;
    w = 0;
    a = 0;
    b = 0;
    r = 0;
    penColor.clear();
    penWidth = 0;
    penStyle.clear();
    penCapStyle.clear();
    penJoinStyle.clear();
    textString.clear();
    textColor.clear();
    textAlignment.clear();
    textSize = 0;
    textFamily.clear();
    textStyle.clear();
    textWeight.clear();

    fin.open("shapes.txt");
//    fout.open("output.txt");
}
Parser::~Parser()
{
	fin.close();
//	fout.close();
}




void Parser::skipLine()
{
	fin.ignore(numeric_limits<streamsize>::max(), '\n');
}
int Parser::readShapeId()
{
    fin.ignore(SHAPE_ID, '\n');
    fin >> id;
    skipLine();
    return id;
}
SHAPE Parser::readShapeType()
{
    fin.ignore(SHAPE_TYPE, '\n');
    getline(fin, shapeType);

    if(shapeType == "Line")
     {
       return SHAPE::LINE;
     }
     else if(shapeType == "Polyline")
     {
         return SHAPE::POLYLINE;
     }
     else if(shapeType == "Polygon")
     {
         return SHAPE::POLYGON;
     }
     else if(shapeType == "Rectangle")
     {
         return SHAPE::RECTANGLE;
     }
     else if(shapeType == "Square")
     {
         return SHAPE::SQUARE;
     }
     else if(shapeType == "Ellipse")
     {
         return SHAPE::ELLIPSE;
     }
     else if(shapeType == "Circle")
     {
         return SHAPE::CIRCLE;
     }
     else if(shapeType == "Text")
     {
         return SHAPE::TEXT;
     }
     else
     {
         assert(false);
     }
}
void Parser::readLineDimensions(vector<QPoint> &points)
{
    fin.ignore(SHAPE_DIMENSIONS, '\n');
    fin >> x1;
    fin.ignore(COMMA, '\n');
    fin >> y1;
    fin.ignore(COMMA, '\n');
    fin >> x2;
    fin.ignore(COMMA, '\n');
    fin >> y2;
    skipLine();

    points[0].setX(x1);
    points[0].setY(y1);
    points[1].setX(x2);
    points[1].setY(y2);
}
void Parser::readPolyDimensions(vector<QPoint> &points)
{
    fin.ignore(SHAPE_DIMENSIONS, '\n');
    fin >> x1;
    fin.ignore(COMMA, '\n');
    fin >> y1;
    fin.ignore(COMMA, '\n');
    fin >> x2;
    fin.ignore(COMMA, '\n');
    fin >> y2;
    fin.ignore(COMMA, '\n');
    fin >> x3;
    fin.ignore(COMMA, '\n');
    fin >> y3;
    fin.ignore(COMMA, '\n');
    fin >> x4;
    fin.ignore(COMMA, '\n');
    fin >> y4;
    skipLine();

    points[0].setX(x1);
    points[0].setY(y1);
    points[1].setX(x2);
    points[1].setY(y2);
    points[2].setX(x3);
    points[2].setY(y3);
    points[3].setX(x4);
    points[3].setY(y4);
}
void Parser::readRectangleDimensions(QPoint &topLeft, int &length, int &width)
{
    fin.ignore(SHAPE_DIMENSIONS, '\n');
    fin >> x1;
    fin.ignore(COMMA, '\n');
    fin >> y1;
    fin.ignore(COMMA, '\n');
    fin >> l;
    fin.ignore(COMMA, '\n');
    fin >> w;
    skipLine();

    topLeft.setX(x1);
    topLeft.setY(y1);
    length = l;
    width = w;
}
void Parser::readSquareDimensions(QPoint &topLeft, int &length)
{
    fin.ignore(SHAPE_DIMENSIONS, '\n');
    fin >> x1;
    fin.ignore(COMMA, '\n');
    fin >> y1;
    fin.ignore(COMMA, '\n');
    fin >> l;
    skipLine();

    topLeft.setX(x1);
    topLeft.setY(y1);
    length = l;
}
void Parser::readEllipseDimensions(QPoint &topLeft, int &majorAx, int &minorAx)
{
    fin.ignore(SHAPE_DIMENSIONS, '\n');
    fin >> x1;
    fin.ignore(COMMA, '\n');
    fin >> y1;
    fin.ignore(COMMA, '\n');
    fin >> a;
    fin.ignore(COMMA, '\n');
    fin >> b;
    skipLine();

    topLeft.setX(x1);
    topLeft.setY(y1);
    majorAx = a;
    minorAx = b;
}
void Parser::readCircleDimensions(QPoint &topLeft, int &radius)
{
    fin.ignore(SHAPE_DIMENSIONS, '\n');
    fin >> x1;
    fin.ignore(COMMA, '\n');
    fin >> y1;
    fin.ignore(COMMA, '\n');
    fin >> r;
    skipLine();
    topLeft.setX(x1);
    topLeft.setY(y1);
    radius = r;
}
void Parser::readTextDimensions(QPoint &topLeft, int &length, int &width)
{
    fin.ignore(SHAPE_DIMENSIONS, '\n');
    fin >> x1;
    fin.ignore(COMMA, '\n');
    fin >> y1;
    fin.ignore(COMMA, '\n');
    fin >> l;
    fin.ignore(COMMA, '\n');
    fin >> w;
    skipLine();

    topLeft.setX(x1);
    topLeft.setY(y1);
    length = l;
    width = w;
}
Qt::GlobalColor Parser::readPenColor()
{
    fin.ignore(PEN_COLOR, '\n');
    getline(fin, penColor);

    if(penColor == "white")
     {
       return Qt::GlobalColor::white;
     }
     else if(penColor == "black")
     {
         return Qt::GlobalColor::black;
     }
     else if(penColor == "red")
     {
         return Qt::GlobalColor::red;
     }
     else if(penColor == "green")
     {
         return Qt::GlobalColor::green;
     }
     else if(penColor == "blue")
     {
         return Qt::GlobalColor::blue;
     }
     else if(penColor == "cyan")
     {
         return Qt::GlobalColor::cyan;
     }
     else if(penColor == "magenta")
     {
         return Qt::GlobalColor::magenta;
     }
     else if(penColor == "yellow")
     {
         return Qt::GlobalColor::yellow;
     }
     else if(penColor == "gray")
     {
         return Qt::GlobalColor::gray;
     }
     else
     {
         assert(false);
     }
}
int Parser::readPenWidth()
{
    fin.ignore(PEN_WIDTH, '\n');
    fin >> penWidth;
    skipLine();

    return penWidth;
}
Qt::PenStyle Parser::readPenStyle()
{
    fin.ignore(PEN_STYLE, '\n');
    getline(fin, penStyle);

    if(penStyle == "NoPen")
    {
        return Qt::PenStyle::NoPen;
    }
    else if(penStyle == "SolidLine")
    {
        return Qt::PenStyle::SolidLine;
    }
    else if(penStyle == "DashLine")
    {
        return Qt::PenStyle::DashLine;
    }
    else if(penStyle == "DotLine")
    {
        return Qt::PenStyle::DotLine;
    }
    else if(penStyle == "DashDotLine")
    {
        return Qt::PenStyle::DashDotLine;
    }
    else if(penStyle == "DashDotDotLine")
    {
        return Qt::PenStyle::DashDotDotLine;
    }
    else
    {
        assert(false);
    }
}
Qt::PenCapStyle Parser::readPenCapStyle()
{
    fin.ignore(PEN_CAP_STYLE, '\n');
    getline(fin, penCapStyle);

    if (penCapStyle == "FlatCap")
    {
        return Qt::PenCapStyle::FlatCap;
    }
    else if (penCapStyle == "SquareCap")
    {
       return Qt::PenCapStyle::SquareCap;
    }
    else if(penCapStyle == "RoundCap")
    {
        return Qt::PenCapStyle::RoundCap;
    }
    else
    {
        assert(false);
    }
}
Qt::PenJoinStyle Parser::readPenJoinStyle()
{
    fin.ignore(PEN_JOIN_STYLE, '\n');
    getline(fin, penJoinStyle);

    if(penJoinStyle == "MiterJoin")
     {
         return Qt::PenJoinStyle::MiterJoin;
     }
     else if(penJoinStyle == "BevelJoin")
     {
         return Qt::PenJoinStyle::BevelJoin;
     }
     else if(penJoinStyle == "RoundJoin")
     {
         return Qt::PenJoinStyle::RoundJoin;
     }
     else
     {
         assert(false);
     }
}
Qt::GlobalColor Parser::readBrushColor()
{
    fin.ignore(BRUSH_COLOR, '\n');
    getline(fin, brushColor);

    if(brushColor == "white")
     {
       return Qt::GlobalColor::white;
     }
     else if(brushColor == "black")
     {
         return Qt::GlobalColor::black;
     }
     else if(brushColor == "red")
     {
         return Qt::GlobalColor::red;
     }
     else if(brushColor == "green")
     {
         return Qt::GlobalColor::green;
     }
     else if(brushColor == "blue")
     {
         return Qt::GlobalColor::blue;
     }
     else if(brushColor == "cyan")
     {
         return Qt::GlobalColor::cyan;
     }
     else if(brushColor == "magenta")
     {
         return Qt::GlobalColor::magenta;
     }
     else if(brushColor == "yellow")
     {
         return Qt::GlobalColor::yellow;
     }
     else if(brushColor == "gray")
     {
         return Qt::GlobalColor::gray;
     }
     else
     {
         assert(false);
     }
}
Qt::BrushStyle Parser::readBrushStyle()
{
    fin.ignore(BRUSH_STYLE, '\n');
    getline(fin, brushStyle);

    if(brushStyle == "NoBrush")
    {
        return Qt::BrushStyle::NoBrush;
    }
    else if(brushStyle == "SolidPattern")
    {
        return Qt::BrushStyle::SolidPattern;
    }
    else if(brushStyle == "HorPattern")
    {
        return Qt::BrushStyle::HorPattern;
    }
    else if (brushStyle == "VerPattern")
    {
        return Qt::BrushStyle::VerPattern;
    }
    else
    {
        assert(false);
    }
}
string Parser::readTextString()
{
	fin.ignore(TEXT_STRING, '\n');
	getline(fin, textString);

    return textString;
}
Qt::GlobalColor Parser::readTextColor()
{
	fin.ignore(TEXT_COLOR, '\n');
	getline(fin, textColor);

    if(textColor == "white")
     {
       return Qt::GlobalColor::white;
     }
     else if(textColor == "black")
     {
         return Qt::GlobalColor::black;
     }
     else if(textColor == "red")
     {
         return Qt::GlobalColor::red;
     }
     else if(textColor == "green")
     {
         return Qt::GlobalColor::green;
     }
     else if(textColor == "blue")
     {
         return Qt::GlobalColor::blue;
     }
     else if(textColor == "cyan")
     {
         return Qt::GlobalColor::cyan;
     }
     else if(textColor == "magenta")
     {
         return Qt::GlobalColor::magenta;
     }
     else if(textColor == "yellow")
     {
         return Qt::GlobalColor::yellow;
     }
     else if(textColor == "gray")
     {
         return Qt::GlobalColor::gray;
     }
     else
     {
         assert(false);
     }
}
Qt::AlignmentFlag Parser::readTextAlignment()
{
	fin.ignore(TEXT_ALIGNMENT, '\n');
	getline(fin, textAlignment);

     if(textAlignment == "AlignLeft")
     {
       return Qt::AlignmentFlag::AlignLeft;
     }
     else if(textAlignment == "AlignRight")
     {
         return Qt::AlignmentFlag::AlignRight;
     }
     else if(textAlignment == "AlignTop")
     {
         return Qt::AlignmentFlag::AlignTop;
     }
     else if(textAlignment == "AlignBottom")
     {
         return Qt::AlignmentFlag::AlignBottom;
     }
     else if(textAlignment == "AlignCenter")
     {
         return Qt::AlignmentFlag::AlignCenter;
     }
     else
     {
        assert(false);
     }
}
int Parser::readTextSize()
{
	fin.ignore(TEXT_SIZE, '\n');
	fin >> textSize;
	skipLine();

	return textSize;
}
string Parser::readTextFamily()
{
	fin.ignore(TEXT_FAMILY, '\n');
	getline(fin, textFamily);

    return textFamily;
}
QFont::Style Parser::readTextStyle()
{
	fin.ignore(TEXT_STYLE, '\n');
	getline(fin, textStyle);


    if(textStyle == "StyleNormal")
    {
        return QFont::Style::StyleNormal;
    }
    else if(textStyle == "StyleItalic")
    {
        return QFont::Style::StyleItalic;
    }
    else if(textStyle == "StyleOblique")
    {
        return QFont::Style::StyleOblique;
    }
    else
    {
        assert(false);
    }
}
QFont::Weight Parser::readTextWeight()
{
	fin.ignore(TEXT_WEIGHT, '\n');
	getline(fin, textWeight);


    if(textWeight == "Thin")
    {
        return QFont::Weight::Thin;
    }
    else if(textWeight == "Light")
    {
        return QFont::Weight::Light;
    }
    else if(textWeight == "Normal")
    {
        return QFont::Weight::Normal;
    }
    else if(textWeight == "Bold")
    {
        return QFont::Weight::Bold;
    }
    else
    {
        assert(false);
    }
}



void Parser::readShape()
{
//    SHAPE type;
//    vector<QPoint> point;

//    int length, width;
//    int majorAx, minorAx;
//    int radius;

//    Qt::GlobalColor pColor;
//    int pWidth;
//    Qt::PenStyle pStyle;
//    Qt::PenCapStyle pCapStyle;
//    Qt::PenJoinStyle pJoinStyle;
//    Qt::GlobalColor bColor;
//    Qt::BrushStyle bStyle;
//    Qt::GlobalColor txtColor;
//    Qt::AlignmentFlag txtAlign;
//    QFont::Style txtStyle;
//    QFont::Weight txtWeight;





//    skipLine();
//    readShapeId();
//    type = readShapeType();

//    switch (type)
//    {
//    case(LINE): readLineDimensions(point);
//    case(POLYLINE): readPolyDimensions(point);
//    case(POLYGON):  readRectangleDimensions(point[0], length, width);
//    case(RECTANGLE):
//    case(SQUARE):
//    case(ELLIPSE):
//    case(CIRCLE):
//    case(TEXT):
//    defualt:
//    }











////    readLineDimensions();
//    readPenColor();
//    readPenWidth();
//    readPenStyle();
//    readPenCapStyle();
//    readPenJoinStyle();

}








void Parser::outputEmptyLine() const
{
	cout << endl;
}
void Parser::outputShapeId() const
{
	cout << "ShapeId: " << id << endl;
}
void Parser::outputShapeType() const
{
    cout << "ShapeType: " << shapeType << endl;
}
void Parser::outputLineDimensions() const
{
	cout << "ShapeDimensions: " << x1 << ", " << y1 << ", "
								<< x2 << ", " << y2 << endl;
}
void Parser::outputPolyDimensions() const
{
	cout << "ShapeDimensions: " << x1 << ", " << y1 << ", "
								<< x2 << ", " << y2 << ", "
								<< x3 << ", " << y3 << ", "
								<< x4 << ", " << y4 << endl;
}
void Parser::outputRectangleDimensions() const
{
	cout << "ShapeDimensions: " << x1 << ", " << y1 << ", "
								<< l  << ", " << w << endl;
}
void Parser::outputSquareDimensions() const
{
	cout << "ShapeDimensions: " << x1 << ", " << y1 << ", "
								<< l  << endl;
}
void Parser::outputEllipseDimensions() const
{
	cout << "ShapeDimensions: " << x1 << ", " << y1 << ", "
								<< a  << ", " << b << endl;
}
void Parser::outputCircleDimensions() const
{
	cout << "ShapeDimensions: " << x1 << ", " << y1 << ", "
								<< r  << endl;
}
void Parser::outputTextDimensions() const
{
	cout << "ShapeDimensions: " << x1 << ", " << y1 << ", "
								<< l  << ", " << w << endl;
}
void Parser::outputPenColor() const
{
    cout << "PenColor: " << penColor << endl;
}
void Parser::outputPenWidth() const
{
	cout << "PenWidth: " << penWidth << endl;
}
void Parser::outputPenStyle() const
{
    cout << "PenStyle: " << penStyle << endl;
}
void Parser::outputPenCapStyle() const
{
    cout << "PenCapStyle: " << penCapStyle << endl;
}
void Parser::outputPenJoinStyle() const
{
    cout << "PenJoinStyle: " << penJoinStyle << endl;
}
void Parser::outputBrushColor() const
{
    cout << "BrushColor: " << brushColor << endl;
}
void Parser::outputBrushStyle() const
{
    cout << "BrushStyle: " << brushStyle << endl;
}
void Parser::outputTextString() const
{
    cout << "TextString: " << textString << endl;
}
void Parser::outputTextColor() const
{
    cout << "TextColor: " << textColor << endl;
}
void Parser::outputTextAlignment() const
{
    cout << "TextAlignment: " << textAlignment << endl;
}
void Parser::outputTextSize() const
{
	cout << "TextPointSize: " << textSize << endl;
}
void Parser::outputTextFamily() const
{
    cout << "TextFontFamily: " << textFamily << endl;
}
void Parser::outputTextStyle() const
{
    cout << "TextFontStyle: " << textStyle << endl;
}
void Parser::outputTextWeight() const
{
    cout << "TextFontWeight: " << textWeight << endl;
}

bool Parser::fileOpen() const
{
    return (fin? true:false);
}






