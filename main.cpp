
#include<iostream>
#include<fstream>

using namespace std;


#include "parser.h"


int main()
{

Parser parser;

	parser.skipLine();
	parser.readShapeId();
	parser.readShapeType();
	parser.readLineDimensions();
	parser.readPenColor();
	parser.readPenWidth();
	parser.readPenStyle();
	parser.readPenCapStyle();
	parser.readPenJoinStyle();

	parser.outputEmptyLine();
	parser.outputShapeId();
	parser.outputShapeType();
	parser.outputLineDimensions();
	parser.outputPenColor();
	parser.outputPenWidth();
	parser.outputPenStyle();
	parser.outputPenCapStyle();
	parser.outputPenJoinStyle();


	parser.skipLine();
	parser.readShapeId();
	parser.readShapeType();
	parser.readPolyDimensions();
	parser.readPenColor();
	parser.readPenWidth();
	parser.readPenStyle();
	parser.readPenCapStyle();
	parser.readPenJoinStyle();

	parser.outputEmptyLine();
	parser.outputShapeId();
	parser.outputShapeType();
	parser.outputPolyDimensions();
	parser.outputPenColor();
	parser.outputPenWidth();
	parser.outputPenStyle();
	parser.outputPenCapStyle();
	parser.outputPenJoinStyle();


	parser.skipLine();
	parser.readShapeId();
	parser.readShapeType();
	parser.readPolyDimensions();
	parser.readPenColor();
	parser.readPenWidth();
	parser.readPenStyle();
	parser.readPenCapStyle();
	parser.readPenJoinStyle();
	parser.readBrushColor();
	parser.readBrushStyle();

	parser.outputEmptyLine();
	parser.outputShapeId();
	parser.outputShapeType();
	parser.outputPolyDimensions();
	parser.outputPenColor();
	parser.outputPenWidth();
	parser.outputPenStyle();
	parser.outputPenCapStyle();
	parser.outputPenJoinStyle();
	parser.outputBrushColor();
	parser.outputBrushStyle();


	parser.skipLine();
	parser.readShapeId();
	parser.readShapeType();
	parser.readRectangleDimensions();
	parser.readPenColor();
	parser.readPenWidth();
	parser.readPenStyle();
	parser.readPenCapStyle();
	parser.readPenJoinStyle();
	parser.readBrushColor();
	parser.readBrushStyle();

	parser.outputEmptyLine();
	parser.outputShapeId();
	parser.outputShapeType();
	parser.outputRectangleDimensions();
	parser.outputPenColor();
	parser.outputPenWidth();
	parser.outputPenStyle();
	parser.outputPenCapStyle();
	parser.outputPenJoinStyle();
	parser.outputBrushColor();
	parser.outputBrushStyle();


	parser.skipLine();
	parser.readShapeId();
	parser.readShapeType();
	parser.readSquareDimensions();
	parser.readPenColor();
	parser.readPenWidth();
	parser.readPenStyle();
	parser.readPenCapStyle();
	parser.readPenJoinStyle();
	parser.readBrushColor();
	parser.readBrushStyle();

	parser.outputEmptyLine();
	parser.outputShapeId();
	parser.outputShapeType();
	parser.outputSquareDimensions();
	parser.outputPenColor();
	parser.outputPenWidth();
	parser.outputPenStyle();
	parser.outputPenCapStyle();
	parser.outputPenJoinStyle();
	parser.outputBrushColor();
	parser.outputBrushStyle();



	parser.skipLine();
	parser.readShapeId();
	parser.readShapeType();
	parser.readEllipseDimensions();
	parser.readPenColor();
	parser.readPenWidth();
	parser.readPenStyle();
	parser.readPenCapStyle();
	parser.readPenJoinStyle();
	parser.readBrushColor();
	parser.readBrushStyle();

	parser.outputEmptyLine();
	parser.outputShapeId();
	parser.outputShapeType();
	parser.outputEllipseDimensions();
	parser.outputPenColor();
	parser.outputPenWidth();
	parser.outputPenStyle();
	parser.outputPenCapStyle();
	parser.outputPenJoinStyle();
	parser.outputBrushColor();
	parser.outputBrushStyle();


	parser.skipLine();
	parser.readShapeId();
	parser.readShapeType();
	parser.readCircleDimensions();
	parser.readPenColor();
	parser.readPenWidth();
	parser.readPenStyle();
	parser.readPenCapStyle();
	parser.readPenJoinStyle();
	parser.readBrushColor();
	parser.readBrushStyle();

	parser.outputEmptyLine();
	parser.outputShapeId();
	parser.outputShapeType();
	parser.outputCircleDimensions();
	parser.outputPenColor();
	parser.outputPenWidth();
	parser.outputPenStyle();
	parser.outputPenCapStyle();
	parser.outputPenJoinStyle();
	parser.outputBrushColor();
	parser.outputBrushStyle();




	parser.skipLine();
	parser.readShapeId();
	parser.readShapeType();
	parser.readTextDimensions();
	parser.readTextString();
	parser.readTextColor();
	parser.readTextAlignment();
	parser.readTextSize();
	parser.readTextFamily();
	parser.readTextStyle();
	parser.readTextWeight();

	parser.outputEmptyLine();
	parser.outputShapeId();
	parser.outputShapeType();
	parser.outputTextDimensions();
	parser.outputTextString();
	parser.outputTextColor();
	parser.outputTextAlignment();
	parser.outputTextSize();
	parser.outputTextFamily();
	parser.outputTextStyle();
	parser.outputTextWeight();


    return 0;
}
