#include "../my_math.h"

long double my_fabs(double x) {
  if (x < 0) x = -x;
  return x;
}