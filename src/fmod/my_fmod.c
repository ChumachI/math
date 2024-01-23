#include "../my_math.h"

long double my_fmod(double x, double y) {
  long double result = 0;
  if (my_is_inf(y)) {
    if (my_is_inf(x)) {
      result = my_NAN;
    } else {
      result = x;
    }
  } else if (my_is_inf(x)) {
    result = my_NAN;
  } else if (y == 0) {
    result = 0 / 0.0;
  } else {
    long long n = x / y;
    result = x - (long double)(n * y);
  }

  return result;
}
