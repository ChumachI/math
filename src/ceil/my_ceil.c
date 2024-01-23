#include "../my_math.h"

long double my_ceil(double x) {
  long double result = (long double)((long long)x);
  if (my_is_nan(x)) {
    result = my_NAN;
  } else if (my_is_inf(x)) {
    result = my_INF;
  } else if (result < x) {
    result += 1.0;
  }
  return result;
}
