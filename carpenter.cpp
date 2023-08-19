
// Определите методы класса здесь
#include "carpenter.h"

int CalcShelves(Wall& wall) {
	int s = CalcSquare(wall.GetHeight(), wall.GetWidth()) / 2;
	return s;
}