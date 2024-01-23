#include "../my_math.h"

long double my_asin(double x) {
  if (my_is_nan(x) || x < -1.0 || x > 1.0) {
    return my_NAN;
  }
  if (x == 1.0) {
    return my_PI_2;
  }
  if (x == -1.0) {
    return -my_PI_2;
  }
  return my_atan(x / my_sqrt(1.0 - x * x));
}