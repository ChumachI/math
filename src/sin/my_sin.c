#include "../my_math.h"

long double my_sin(double x) {
  // Проверки на NaN и бесконечность
  if (my_is_nan(x) || my_fabs(x) == my_INF) {
    return my_NAN;
  }
  // Нормализация x в пределы от -2π до 2π
  x = my_fmod(x, 2.0 * my_PI);
  long double result = x;
  long double step = x;
  unsigned flag = 1;
  // sin(x) = x - x^3/3! + x^5/5! - x^7/7! + x^9/9! - x^11/11! + ...
  // Прибавляем следующие члены ряда Тейлора до достижения предела точности
  while (my_fabs(step / result) > my_EPS) {
    flag += 2;
    step *= -(x * x) / ((flag - 1) * flag);
    result += step;
  }
  return result;
}
