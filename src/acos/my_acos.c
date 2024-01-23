#include "../my_math.h"

long double my_acos(double x) {
  if (x < -1.0 || x > 1.0) {
    return my_NAN;
  }
  return my_PI_2 - my_asin(x);
}