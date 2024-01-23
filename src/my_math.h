#ifndef SRC_MY_MATH_H_
#define SRC_MY_MATH_H_

#include <float.h>
#include <stdio.h>

#define DBL_TOLERANCE 1e-7
#define E 2.71828182845904523536028747
// Проверка на бесконечность
#define my_is_inf __builtin_isinf
// Проверка на NaN
#define my_is_nan __builtin_isnan
#define my_NAN (0.0 / 0.0)
#define my_INF (1.0 / 0.0)
// Эпсилон
#define my_EPS 1e-17
#define my_PI 3.14159265358979323846
// Для вычесления atan asin acos
#define my_PI_2 (my_PI / 2.)
#define my_PI_4 (my_PI / 4.)

int my_abs(int x);

long double my_log(double x);
long double my_cos(double x);
long double my_exp(double x);
long double my_log(double x);
long double my_sin(double x);
long double my_tan(double x);
long double my_acos(double x);
long double my_asin(double x);
long double my_atan(double x);
long double my_ceil(double x);
long double my_fabs(double x);
long double my_sqrt(double x);
long double my_floor(double x);
long double my_fmod(double x, double y);
long double my_pow(double base, double exp);

#endif  //  SRC_MY_MATH_H_