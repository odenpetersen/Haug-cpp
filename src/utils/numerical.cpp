#ifndef CMATH_
#define CMATH_
#include <cmath>
#endif

double relative_error(double expected, double output) {
	return std::abs((output - expected) / expected);
}
