#include <math.h>
#include "Header.h"

bool isInArea(double x, double y) {
	if (x >= 0 && y >= 0)
		return (pow(x, 2) + pow(y, 2) <= 1);
	else if (x <= 0 && y <= 0)
		return (x <= 1 && y <= 1);
	return 0;
}