#ifndef CMATH_
#define CMATH_
#include <cmath>
#endif

double pnorm(double value) {
   return 0.5 * std::erfc(-value * std::sqrt(0.5));
}
