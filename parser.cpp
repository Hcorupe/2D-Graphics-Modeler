
#include "parser.h"



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
    fout.open("output.txt");
}
Parser::~Parser()
{
	fin.close();
	fout.close();
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
void Parser::readShapeType()
{
    fin.ignore(SHAPE_TYPE, '\n');
    getline(fin, shapeType);
}
void Parser::readLineDimensions()
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
}
void Parser::readPolyDimensions()
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
}
void Parser::readRectangleDimensions()
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
}
void Parser::readSquareDimensions()
{
    fin.ignore(SHAPE_DIMENSIONS, '\n');
    fin >> x1;
    fin.ignore(COMMA, '\n');
    fin >> y1;
    fin.ignore(COMMA, '\n');
    fin >> l;
    skipLine();
}
void Parser::readEllipseDimensions()
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
}
void Parser::readCircleDimensions()
{
    fin.ignore(SHAPE_DIMENSIONS, '\n');
    fin >> x1;
    fin.ignore(COMMA, '\n');
    fin >> y1;
    fin.ignore(COMMA, '\n');
    fin >> r;
    skipLine();
}
void Parser::readTextDimensions()
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
}
void Parser::readPenColor()
{
    fin.ignore(PEN_COLOR, '\n');
    getline(fin, penColor);
}
void Parser::readPenWidth()
{
    fin.ignore(PEN_WIDTH, '\n');
    fin >> penWidth;
    skipLine();
}
void Parser::readPenStyle()
{
    fin.ignore(PEN_STYLE, '\n');
    getline(fin, penStyle);
}
void Parser::readPenCapStyle()
{
    fin.ignore(PEN_CAP_STYLE, '\n');
    getline(fin, penCapStyle);
}
void Parser::readPenJoinStyle()
{
    fin.ignore(PEN_JOIN_STYLE, '\n');
    getline(fin, penJoinStyle);
}
void Parser::readBrushColor()
{
    fin.ignore(BRUSH_COLOR, '\n');
    getline(fin, brushColor);
}
void Parser::readBrushStyle()
{
    fin.ignore(BRUSH_STYLE, '\n');
    getline(fin, brushStyle);
}
void Parser::readTextString()
{
	fin.ignore(TEXT_STRING, '\n');
	getline(fin, textString);
}
void Parser::readTextColor()
{
	fin.ignore(TEXT_COLOR, '\n');
	getline(fin, textColor);
}
void Parser::readTextAlignment()
{
	fin.ignore(TEXT_ALIGNMENT, '\n');
	getline(fin, textAlignment);
}
int Parser::readTextSize()
{
	fin.ignore(TEXT_SIZE, '\n');
	fin >> textSize;
	skipLine();
	return textSize;
}
void Parser::readTextFamily()
{
	fin.ignore(TEXT_FAMILY, '\n');
	getline(fin, textFamily);
}
void Parser::readTextStyle()
{
	fin.ignore(TEXT_STYLE, '\n');
	getline(fin, textStyle);
}
void Parser::readTextWeight()
{
	fin.ignore(TEXT_WEIGHT, '\n');
	getline(fin, textWeight);
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
	cout << "ShapeType: " << shapeType;
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
	cout << "PenColor: " << penColor;
}
void Parser::outputPenWidth() const
{
	cout << "PenWidth: " << penWidth << endl;
}
void Parser::outputPenStyle() const
{
	cout << "PenStyle: " << penStyle;
}
void Parser::outputPenCapStyle() const
{
	cout << "PenCapStyle: " << penCapStyle;
}
void Parser::outputPenJoinStyle() const
{
	cout << "PenJoinStyle: " << penJoinStyle;
}
void Parser::outputBrushColor() const
{
	cout << "BrushColor: " << brushColor;
}
void Parser::outputBrushStyle() const
{
	cout << "BrushStyle: " << brushStyle;
}
void Parser::outputTextString() const
{
	cout << "TextString: " << textString;
}
void Parser::outputTextColor() const
{
	cout << "TextColor: " << textColor;
}
void Parser::outputTextAlignment() const
{
	cout << "TextAlignment: " << textAlignment;
}
void Parser::outputTextSize() const
{
	cout << "TextPointSize: " << textSize << endl;
}
void Parser::outputTextFamily() const
{
	cout << "TextFontFamily: " << textFamily;
}
void Parser::outputTextStyle() const
{
	cout << "TextFontStyle: " << textStyle;
}
void Parser::outputTextWeight() const
{
	cout << "TextFontWeight: " << textWeight;
}





