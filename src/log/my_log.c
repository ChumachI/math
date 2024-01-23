#include <stdio.h>

#include "../my_math.h"

long double my_log(double x) {
  double result = 0;
  int ex_pow = 0;
  if (my_is_inf(x)) {
    if (x < 0) {
      result = my_NAN;
    } else {
      result = my_INF;
    }
  } else if (x <= 0) {
    if (x == 0) {
      result = my_INF;
    } else {
      result = my_NAN;
    }
  } else {
    double compare = 0;
    while (x > E) {
      x /= E;
      ex_pow++;
    }
    for (int i = 0; i < 100; i++) {
      compare = result;
      result = compare + 2 * (x - my_exp(compare)) / (x + my_exp(compare));
    }
  }

  return result + ex_pow;
}
