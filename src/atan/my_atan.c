#include "../my_math.h"

// Диапозон -π/2 до +π/2
long double my_atan(double x) {
  if (my_is_nan(x)) {
    return my_NAN;
  }
  if (x == my_INF) {
    return my_PI_2;
  }
  if (x == -my_INF) {
    return -my_PI_2;
  }
  if (x == 1) {
    return my_PI_4;
  }
  if (x == -1) {
    return -my_PI_4;
  }
  int sign = 0;
  if (x < 0) {
    x = -x;
    sign = 1;
  }
  int flip = 0;
  if (x > 1) {
    x = 1 / x;
    flip = 1;
  }
  long double term = x;
  long double res = 0.0;
  for (int i = 1; my_fabs(term) > 1e-16; i += 2) {
    if (i % 4 == 1) {
      res += term;
    } else {
      res -= term;
    }
    term *= x * x * i / (i + 2);
  }
  if (flip) {
    res = my_PI_2 - res;
  }
  return sign ? -res : res;
}
