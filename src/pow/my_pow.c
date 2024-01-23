#include "../my_math.h"

long double my_pow(double base, double exp) {
  long double result = 0;
  if (my_fabs(base) < 1 && my_fabs(base) > 0) {
    if (my_is_inf(exp)) {
      result = exp > 0 ? my_exp(exp * my_log(base)) : my_INF;
    } else {
      result = my_exp(exp * my_log(base));
    }
  } else if (my_is_inf(base)) {
    if (exp == 0) {
      result = 1;
    } else if (my_is_inf(exp)) {
      result = exp < 0 ? 0 : my_INF;
    } else if (my_is_nan(exp)) {
      result = my_NAN;
    }
  } else if (my_is_nan(base)) {
    result = exp == 0 ? 1 : my_NAN;
  } else if (base == 1 || (base == -1 && my_is_inf(exp))) {
    result = 1;
  } else if (base == 0) {
    result = (exp < 0 || my_is_inf(exp)) ? my_INF : (exp == 0 ? 1 : 0);
  } else if (base < 0) {
    if (my_is_inf(exp) && exp > 0) {
      result = my_INF;
    } else if (my_is_inf(exp) && exp < 0) {
      result = 0;
    } else {
      base = -base;
      result = my_exp(exp * my_log(base));
      if (my_fmod(exp, 2) != 0 && exp != 0) {
        result = -result;
      }
    }
  } else {
    if (my_is_inf(exp) && exp < 0) {
      result = 0;
    } else if (my_is_inf(exp) && exp > 0) {
      result = my_INF;
    } else {
      result = my_exp(exp * my_log(base));
    }
  }
  return result;
}
