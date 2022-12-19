#ifndef CMATH_
#define CMATH_
#include <cmath>
#endif

float relative_error(float expected, float output) {
	return std::abs((output - expected) / expected);
}
