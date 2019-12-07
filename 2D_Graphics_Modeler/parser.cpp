#include <cassert>
#include "parser.h"

//! Default constructor
Parser::Parser()
{
    pointList.resize(4);	//4 is number of QPoints polyLine has in shape.txt resize() just so we can use [] right away 
                            // without pushback
    id = 0;
    shapeType.clear();
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
}
Parser::~Parser()
{
	fin.close();
}


//*********MUTATORS********************MUTATORS********************MUTATORS********************MUTATORS********************MUTATORS***********


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
void Parser::readLineDimensions()
{
    fin.ignore(SHAPE_DIMENSIONS, '\n');
    fin >> pointList[0].rx();
    fin.ignore(COMMA, '\n');
    fin >> pointList[0].ry();
    fin.ignore(COMMA, '\n');
    fin >> pointList[1].rx();
    fin.ignore(COMMA, '\n');
    fin >> pointList[1].ry();
    skipLine();
}
void Parser::readPolyDimensions()
{
    fin.ignore(SHAPE_DIMENSIONS, '\n');
    fin >> pointList[0].rx();
    fin.ignore(COMMA, '\n');
    fin >> pointList[0].ry();
    fin.ignore(COMMA, '\n');
    fin >> pointList[1].rx();
    fin.ignore(COMMA, '\n');
    fin >> pointList[1].ry();
    fin.ignore(COMMA, '\n');
    fin >> pointList[2].rx();
    fin.ignore(COMMA, '\n');
    fin >> pointList[2].ry();
    fin.ignore(COMMA, '\n');
    fin >> pointList[3].rx();
    fin.ignore(COMMA, '\n');
    fin >> pointList[3].ry();
    skipLine();
}
void Parser::readRectangleDimensions()
{
    fin.ignore(SHAPE_DIMENSIONS, '\n');
    fin >> pointList[0].rx();
    fin.ignore(COMMA, '\n');
    fin >> pointList[0].ry();
    fin.ignore(COMMA, '\n');
    fin >> l;
    fin.ignore(COMMA, '\n');
    fin >> w;
    skipLine();

}
void Parser::readSquareDimensions()
{
    fin.ignore(SHAPE_DIMENSIONS, '\n');
    fin >> pointList[0].rx();
    fin.ignore(COMMA, '\n');
    fin >> pointList[0].ry();
    fin.ignore(COMMA, '\n');
    fin >> l;
    skipLine();

}
void Parser::readEllipseDimensions()
{
    fin.ignore(SHAPE_DIMENSIONS, '\n');
    fin >> pointList[0].rx();
    fin.ignore(COMMA, '\n');
    fin >> pointList[0].ry();
    fin.ignore(COMMA, '\n');
    fin >> a;
    fin.ignore(COMMA, '\n');
    fin >> b;
    skipLine();

}
void Parser::readCircleDimensions()
{
    fin.ignore(SHAPE_DIMENSIONS, '\n');
    fin >> pointList[0].rx();
    fin.ignore(COMMA, '\n');
    fin >> pointList[0].ry();
    fin.ignore(COMMA, '\n');
    fin >> r;
    skipLine();

}
void Parser::readTextDimensions()
{
    fin.ignore(SHAPE_DIMENSIONS, '\n');
    fin >> pointList[0].rx();
    fin.ignore(COMMA, '\n');
    fin >> pointList[0].ry();
    fin.ignore(COMMA, '\n');
    fin >> l;
    fin.ignore(COMMA, '\n');
    fin >> w;
    skipLine();

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


myStd::vector<Shape *> Parser::readShape()
{

    SHAPE type;

    Qt::GlobalColor pColor;
    Qt::PenStyle pStyle;
    Qt::PenCapStyle pCapStyle;
    Qt::PenJoinStyle pJoinStyle;
    Qt::GlobalColor bColor;
    Qt::BrushStyle bStyle;
    Qt::GlobalColor txtColor;
    Qt::AlignmentFlag txtAlign;
    QFont::Style txtStyle;
    QFont::Weight txtWeight;
    QString txtString;
    QString txtFamily;




    skipLine();
    readShapeId();
    while(fin)
    {
        type = readShapeType();

        switch (type)
        {
        case(LINE):     readLineDimensions();
                        break;
        case(POLYLINE): readPolyDimensions();
                        break;
        case(POLYGON):  readPolyDimensions();
                        break;
        case(RECTANGLE):readRectangleDimensions();
                        break;
        case(SQUARE):   readSquareDimensions();
                        break;
        case(ELLIPSE):  readEllipseDimensions();
                        break;
        case(CIRCLE):   readCircleDimensions();
                        break;
        case(TEXT):     readTextDimensions();
                        break;
        }

        if(type != TEXT)
        {
            pColor = readPenColor();
            readPenWidth();
            pStyle = readPenStyle();
            pCapStyle = readPenCapStyle();
            pJoinStyle = readPenJoinStyle();
            if(type != LINE && type != POLYLINE)
            {
                bColor = readBrushColor();
                bStyle = readBrushStyle();
            }
        }
        else
        {
            readTextString();
            txtColor = readTextColor();
            txtAlign = readTextAlignment();
            readTextSize();
            readTextFamily();
            txtStyle = readTextStyle();
            txtWeight = readTextWeight();
            txtString = QString::fromStdString(textString);
            txtFamily = QString::fromStdString(textFamily);
        }

        switch (type)
        {
        case(LINE):
        {Line* lin = new Line(id, pointList[0], pointList[1], pColor, penWidth, pStyle, pCapStyle, pJoinStyle);
            list.push_back(lin);
            break;}

        case(POLYLINE):
        {Polyline* plyLin = new Polyline(id, pointList, pColor, penWidth, pStyle, pCapStyle, pJoinStyle) ;
            list.push_back(plyLin);
            break;}

        case(POLYGON):
        {Polygon* plyGon = new Polygon(id, pointList, pColor, penWidth, pStyle, pCapStyle, pJoinStyle, bColor, bStyle);
            list.push_back(plyGon);
            break;}

        case(RECTANGLE):
        {Rectangle* rect = new Rectangle(id, pointList[0], l, w, pColor, penWidth, pStyle, pCapStyle, pJoinStyle, bColor, bStyle);
            list.push_back(rect);
            break;}

        case(SQUARE):
        {Square* sqr = new Square(id, pointList[0], l, pColor, penWidth, pStyle, pCapStyle, pJoinStyle, bColor, bStyle);
            list.push_back(sqr);
            break;}

        case(ELLIPSE):
        {Ellipse* elips = new Ellipse(id, pointList[0], pColor, penWidth, pStyle, pCapStyle, pJoinStyle, bColor, bStyle, a, b);
            list.push_back(elips);
            break;}
        case(CIRCLE):
        {Circle* crcl = new Circle(id, pointList[0], pColor, penWidth, pStyle, pCapStyle, pJoinStyle, bColor, bStyle, r);
            list.push_back(crcl);
            break;}

        case(TEXT):
        {Text* txt = new Text(id, pointList[0], l, w, txtString, txtColor, txtAlign, textSize, txtFamily, txtStyle, txtWeight);
            list.push_back(txt);
            break;}
        }
        skipLine();     // was called before the while loop once. Needs to be at the end and not the beging of while-loop so
        readShapeId();  // at the end of the file it makes the fin false before the while-loop checks (fin) and we will exit
                        // the loop at the correct time.
    }
    return list;
}




void Parser::shapeIn(Shape* curr)
{
    SHAPE type = curr->getShapeType();


    id = curr->getShapeId();
    shapeType = curr->GetShapeTypeString();
    if(type != TEXT)
    {
        QPen pen = curr->getPen();

//        penColor = colorIn(pen.);
        penWidth = pen.width();
        penStyle = penStyleIn(pen.style());
        penCapStyle = penCapStyleIn(pen.capStyle());
        penJoinStyle = penJoinStyleIn(pen.joinStyle());
        if(type != LINE && type != POLYLINE)
        {
            QBrush brush = curr->getBrush();

//            brushColor = colorIn(brush.);
            brushStyle = brushStyleIn(brush.style());
        }
    }




    switch (type)
    {
    case(LINE):
    {Line* pLin = dynamic_cast<Line*>(curr);
        break;}

    case(POLYLINE):
    {Polyline* pPolyl = dynamic_cast<Polyline*>(curr);
        break;}

    case(POLYGON):
    {Polygon* pPolyg = dynamic_cast<Polygon*>(curr);
        break;}

    case(RECTANGLE):
    {Rectangle* pRect = dynamic_cast<Rectangle*>(curr);
        break;}

    case(SQUARE):
    {Square* pSqr = dynamic_cast<Square*>(curr);
        break;}

    case(ELLIPSE):
    {Ellipse* pElli = dynamic_cast<Ellipse*>(curr);
        break;}
    case(CIRCLE):
    {Circle* pCirc = dynamic_cast<Circle*>(curr);
        break;}

    case(TEXT):
    {Text* pTxt = dynamic_cast<Text*>(curr);
        QFont font = pTxt->getFont();

        textString = (pTxt->getMessage()).toStdString();
//        textColor = colorIn(pText->getColor);
        textAlignment = textAlignmentIn(pTxt->getAlignment());
        textSize = font.pointSize();
        textFamily = (font.family()).toStdString();
        textStyle = textStyleIn(font.style());
        textWeight = textWeightIn(pTxt->getWeight());
        break;}
    }





}


//********ACCESSORS****************ACCESSORS****************ACCESSORS****************ACCESSORS****************ACCESSORS********************************ACCESSORS****************





//string Parser::shapeTypeIn(SHAPE type)
//{
//    switch (type)
//    {
//    case(LINE):     return "Line";
//    case(POLYLINE): return "Polyline";
//    case(POLYGON):  return "Polygon";
//    case(RECTANGLE):return "Rectangle";
//    case(SQUARE):   return "Square";
//    case(ELLIPSE):  return "Ellipse";
//    case(CIRCLE):   return "Circle";
//    case(TEXT):     return "Text";
//    }
//}


string Parser::colorIn(Qt::GlobalColor color) const
{
    if(color == Qt::GlobalColor::white)
     {
       return "white";
     }
     else if(color == Qt::GlobalColor::black)
     {
         return "black";
     }
     else if(color == Qt::GlobalColor::red)
     {
         return "red";
     }
     else if(color == Qt::GlobalColor::green)
     {
         return "green";
     }
     else if(color == Qt::GlobalColor::blue)
     {
         return "blue";
     }
     else if(color == Qt::GlobalColor::cyan)
     {
         return "cyan";
     }
     else if(color == Qt::GlobalColor::magenta)
     {
         return "magenta";
     }
     else if(color == Qt::GlobalColor::yellow)
     {
         return "yellow";
     }
     else if(color == Qt::GlobalColor::gray)
     {
         return "gray";
     }
     else
     {
         assert(false);
     }
}


string Parser::penStyleIn(Qt::PenStyle pStyle) const
{
    if(pStyle == Qt::PenStyle::NoPen)
    {
        return "NoPen";
    }
    else if(pStyle == Qt::PenStyle::SolidLine)
    {
        return "SolidLine";
    }
    else if(pStyle == Qt::PenStyle::DashLine)
    {
        return "DashLine";
    }
    else if(pStyle == Qt::PenStyle::DotLine)
    {
        return "DotLine";
    }
    else if(pStyle == Qt::PenStyle::DashDotLine)
    {
        return "DashDotLine";
    }
    else if(pStyle == Qt::PenStyle::DashDotDotLine)
    {
        return "DashDotDotLine";
    }
    else
    {
        assert(false);
    }
}


string Parser::penCapStyleIn(Qt::PenCapStyle pCapStyle) const
{
    if (pCapStyle == Qt::PenCapStyle::FlatCap)
    {
        return "FlatCap";
    }
    else if (pCapStyle == Qt::PenCapStyle::SquareCap)
    {
       return "SquareCap";
    }
    else if(pCapStyle == Qt::PenCapStyle::RoundCap)
    {
        return "RoundCap";
    }
    else
    {
        assert(false);
    }
}


string Parser::penJoinStyleIn(Qt::PenJoinStyle pJoinStyle) const
{
    if(pJoinStyle == Qt::PenJoinStyle::MiterJoin)
     {
         return "MiterJoin";
     }
     else if(pJoinStyle == Qt::PenJoinStyle::BevelJoin)
     {
         return "BevelJoin";
     }
     else if(pJoinStyle == Qt::PenJoinStyle::RoundJoin)
     {
         return "RoundJoin";
     }
     else
     {
         assert(false);
     }
}


string Parser::brushStyleIn(Qt::BrushStyle bStyle) const
{
    if(bStyle == Qt::BrushStyle::NoBrush)
    {
        return "NoBrush";
    }
    else if(bStyle == Qt::BrushStyle::SolidPattern)
    {
        return "SolidPattern";
    }
    else if(bStyle == Qt::BrushStyle::HorPattern)
    {
        return "HorPattern";
    }
    else if (bStyle == Qt::BrushStyle::VerPattern)
    {
        return "VerPattern";
    }
    else
    {
        assert(false);
    }
}


string Parser::textAlignmentIn(Qt::AlignmentFlag txtAlign) const
{
    if(txtAlign == Qt::AlignmentFlag::AlignLeft)
    {
      return "AlignLeft";
    }
    else if(txtAlign == Qt::AlignmentFlag::AlignRight)
    {
        return "AlignRight";
    }
    else if(txtAlign == Qt::AlignmentFlag::AlignTop)
    {
        return "AlignTop";
    }
    else if(txtAlign == Qt::AlignmentFlag::AlignBottom)
    {
        return "AlignBottom";
    }
    else if(txtAlign == Qt::AlignmentFlag::AlignCenter)
    {
        return "AlignCenter";
    }
    else
    {
       assert(false);
    }
}


string Parser::textStyleIn(QFont::Style txtStyle) const
{
    if(txtStyle == QFont::Style::StyleNormal)
    {
        return "StyleNormal";
    }
    else if(txtStyle == QFont::Style::StyleItalic)
    {
        return "StyleItalic";
    }
    else if(txtStyle == QFont::Style::StyleOblique)
    {
        return "StyleOblique";
    }
    else
    {
        assert(false);
    }
}


string Parser::textWeightIn(QFont::Weight txtWeight) const
{
    if(txtWeight == QFont::Weight::Thin)
    {
        return "Thin";
    }
    else if(txtWeight == QFont::Weight::Light)
    {
        return "Light";
    }
    else if(txtWeight == QFont::Weight::Normal)
    {
        return "Normal";
    }
    else if(txtWeight == QFont::Weight::Bold)
    {
        return "Bold";
    }
    else
    {
        assert(false);
    }
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
    cout << "ShapeDimensions: " << pointList[0].x() << ", " << pointList[0].y() << ", "
                                << pointList[1].x() << ", " << pointList[1].y() << endl;
}
void Parser::outputPolyDimensions() const
{
    cout << "ShapeDimensions: " << pointList[0].x() << ", " << pointList[0].y() << ", "
                                << pointList[1].x() << ", " << pointList[1].y() << ", "
                                << pointList[2].x() << ", " << pointList[2].y() << ", "
                                << pointList[3].x() << ", " << pointList[3].y() << endl;
}
void Parser::outputRectangleDimensions() const
{
    cout << "ShapeDimensions: " << pointList[0].x() << ", " << pointList[0].y() << ", "
								<< l  << ", " << w << endl;
}
void Parser::outputSquareDimensions() const
{
    cout << "ShapeDimensions: " << pointList[0].x() << ", " << pointList[0].y() << ", "
								<< l  << endl;
}
void Parser::outputEllipseDimensions() const
{
    cout << "ShapeDimensions: " << pointList[0].x() << ", " << pointList[0].y() << ", "
								<< a  << ", " << b << endl;
}
void Parser::outputCircleDimensions() const
{
    cout << "ShapeDimensions: " << pointList[0].x() << ", " << pointList[0].y() << ", "
								<< r  << endl;
}
void Parser::outputTextDimensions() const
{
    cout << "ShapeDimensions: " << pointList[0].x() << ", " << pointList[0].y() << ", "
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

bool Parser::fileOpened() const
{
    return (fin? true:false);
}


void Parser::print(SHAPE type) const
{
    outputEmptyLine();
    outputShapeId();
    outputShapeType();

    switch (type)
    {
    case(LINE):     outputLineDimensions();
                    break;
    case(POLYLINE): outputPolyDimensions();
                    break;
    case(POLYGON):  outputPolyDimensions();
                    break;
    case(RECTANGLE):outputRectangleDimensions();
                    break;
    case(SQUARE):   outputSquareDimensions();
                    break;
    case(ELLIPSE):  outputEllipseDimensions();
                    break;
    case(CIRCLE):   outputCircleDimensions();
                    break;
    case(TEXT):     outputTextDimensions();
                    break;
    }

    if(type != TEXT)
    {
        outputPenColor();
        outputPenWidth();
        outputPenStyle();
        outputPenCapStyle();
        outputPenJoinStyle();
        if(type != LINE && type != POLYLINE)
        {
            outputBrushColor();
            outputBrushStyle();
        }
    }
    else
    {
        outputTextString();
        outputTextColor();
        outputTextAlignment();
        outputTextSize();
        outputTextFamily();
        outputTextStyle();
        outputTextWeight();
    }
}
