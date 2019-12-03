#include "SortingAlgs.h"

void swap(Shape** a, Shape** b)
{
	Shape* temp = *a;
	*a = *b;
	*b = temp;
}

void IdSort(myStd::vector<Shape*>& vectorInp, int startIndex, int endIndex)
{
	int lowest = INT_MAX;
	int lowestIndex = startIndex;

	for (int count = startIndex; count <= endIndex; count++)
		if (vectorInp[count]->getShapeId() < lowest)
		{
			lowest = vectorInp[count]->getShapeId();
			lowestIndex = count;
		}

	swap(&vectorInp[startIndex], &vectorInp[lowestIndex]);

	if (startIndex < endIndex)
		IdSort(vectorInp, startIndex + 1, endIndex);
}

void AreaSort(myStd::vector<Shape*>& vectorInp, int startIndex, int endIndex)
{
	double lowest = INT_MAX;
	int lowestIndex = startIndex;

	for (int count = startIndex; count <= endIndex; count++)
		if (vectorInp[count]->GetArea() < lowest)
		{
			lowest = vectorInp[count]->GetArea();
			lowestIndex = count;
		}

	swap(&vectorInp[startIndex], &vectorInp[lowestIndex]);

	if (startIndex < endIndex)
		AreaSort(vectorInp, startIndex + 1, endIndex);
}

void PerimSort(myStd::vector<Shape*>& vectorInp, int startIndex, int endIndex)
{
	double lowest = INT_MAX;
	int lowestIndex = startIndex;

	for (int count = startIndex; count <= endIndex; count++)
		if (vectorInp[count]->GetPerimeter() < lowest)
		{
			lowest = vectorInp[count]->GetPerimeter();
			lowestIndex = count;
		}

	swap(&vectorInp[startIndex], &vectorInp[lowestIndex]);

	if (startIndex < endIndex)
		PerimSort(vectorInp, startIndex + 1, endIndex);
}
