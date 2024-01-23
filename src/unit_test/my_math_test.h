#ifndef SRC_my_MATH_TEST_H_
#define SRC_my_MATH_TEST_H_

#include <check.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "../my_math.h"

Suite *suite_abs(void);
Suite *suite_floor(void);
Suite *suite_ceil(void);
Suite *suite_fmod(void);
Suite *suite_pow(void);
Suite *suite_fabs(void);
Suite *suite_log(void);
Suite *suite_sqrt(void);
Suite *suite_cos(void);
Suite *suite_sin(void);
Suite *suite_tan(void);
Suite *suite_exp(void);
Suite *suite_atan(void);
Suite *suite_asin(void);
Suite *suite_acos(void);
#endif  //  SRC_my_MATH_TEST_H_