#include "../my_math.h"

long double my_floor(double x) {
  long double result = (long double)((long long)x);
  if (my_is_inf(x)) {
    int sign = x < 0 ? -1 : 1;
    result = my_INF * sign;
  } else if (my_is_nan(x)) {
    result = my_NAN;
  } else if (result > x) {
    result -= 1.0;
  }
  return result;
}
