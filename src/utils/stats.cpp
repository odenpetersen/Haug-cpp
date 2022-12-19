#ifndef CMATH_
#define CMATH_
#include <cmath>
#endif

double normalCDF(double value) {
   return 0.5 * erfc(-value * std::sqrt(0.5));
}
