#ifndef SORTINGALGS_H
#define SORTINGALGS_H

#include "vector.h"
#include "shape.h"
#include <iostream>

void swap(Shape** a, Shape** b);

void IdSort(myStd::vector<Shape*>&, int, int);

void AreaSort(myStd::vector<Shape*>&, int, int);

void PerimSort(myStd::vector<Shape*>&, int, int);

#endif // SORTINGALGS_H