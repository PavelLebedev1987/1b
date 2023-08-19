
// Определите методы класса здесь
#include "carpenter.h"

double CalcShelves(Wall& wall) {
	double s = CalcSquare(wall.GetHeight(), wall.GetWidth()) / 2;
	return s;
}