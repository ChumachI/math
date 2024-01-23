#include "../my_math.h"

long double my_sqrt(double x) {
  long double result = 0;
  if (my_is_inf(x) && x > 0) {
    result = my_INF;
  } else if (my_is_inf(x) && x < 0) {
    result = my_NAN;
  } else if (my_is_nan(x)) {
    result = my_NAN;
  } else if (x < 0) {
    result = 0 / 0.0;
  } else if (x < DBL_TOLERANCE) {
    result = 0;
  } else {
    long double y = x / 2;
    long double new_y = 0;
    int flag = 1;
    while (flag) {
      new_y = (y + x / y) / 2;
      if (my_fabs(new_y - y) < 1e-10)
        flag = 0;
      else
        y = new_y;
    }
    result = y;
  }

  return result;
}
