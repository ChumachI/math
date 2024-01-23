#include "../my_math.h"

long double my_cos(double x) {
  // Проверки на NaN и бесконечность
  if (my_is_nan(x) || my_fabs(x) == my_INF) {
    return my_NAN;
  }
  // Нормализация x в пределы от -2π до 2π
  x = my_fmod(x, 2.0 * my_PI);
  long double result = 1.0;
  long double step = 1.0;
  unsigned flag = 0;
  // cos(x) = 1 - x^2/2! + x^4/4! - x^6/6! + x^8/8! - x^10/10!
  // Прибавляем следующие члены ряда Тейлора до достижения предела точности
  while (my_fabs(step / result) > my_EPS) {
    flag += 2;
    step *= -(x * x) / ((flag - 1) * flag);
    result += step;
  }
  return result;
}
