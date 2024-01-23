#include "../unit_test/my_math_test.h"

START_TEST(test_tan_zero) {
  double x = 0.0;
  ck_assert_ldouble_eq_tol(tan(x), my_tan(x), 1e-6);
}
END_TEST

START_TEST(test_tan_small_positive) {
  double x = 0.4;
  ck_assert_ldouble_eq_tol(tan(x), my_tan(x), 1e-6);
}
END_TEST

START_TEST(test_tan_small_negative) {
  double x = -0.4;
  ck_assert_ldouble_eq_tol(tan(x), my_tan(x), 1e-6);
}
END_TEST

START_TEST(test_tan_pi) {
  double x = my_PI;
  ck_assert_ldouble_eq_tol(tan(x), my_tan(x), 1e-6);
}
END_TEST

START_TEST(test_tan_fractional_pi_values) {
  int i = _i;
  if (i != 2 && i != -2) {
    if (i != 0) {
      ck_assert_ldouble_eq_tol(tan(my_PI / i), my_tan(my_PI / i), 1e-6);
    } else {
      ck_assert_ldouble_nan(my_tan(my_PI / i));
    }
  }
}

START_TEST(test_tan_big_positive) {
  double x = 1e6;
  ck_assert_ldouble_eq_tol(tan(x), my_tan(x), 1e-6);
}
END_TEST

START_TEST(test_tan_big_negative) {
  double x = -1e6;
  ck_assert_ldouble_eq_tol(tan(x), my_tan(x), 1e-6);
}
END_TEST

START_TEST(test_tan_nan) {
  double x = my_NAN;
  ck_assert_ldouble_nan(my_tan(x));
}
END_TEST

START_TEST(test_tan_inf) {
  double x = my_INF;
  ck_assert_ldouble_nan(my_tan(x));
}
END_TEST

Suite *suite_tan(void) {
  Suite *s = suite_create("suite_tan");
  TCase *tc = tcase_create("tan_tc");

  tcase_add_test(tc, test_tan_zero);
  tcase_add_test(tc, test_tan_small_positive);
  tcase_add_test(tc, test_tan_small_negative);
  tcase_add_test(tc, test_tan_pi);
  tcase_add_loop_test(tc, test_tan_fractional_pi_values, -100, 100);
  tcase_add_test(tc, test_tan_big_positive);
  tcase_add_test(tc, test_tan_big_negative);
  tcase_add_test(tc, test_tan_nan);
  tcase_add_test(tc, test_tan_inf);

  suite_add_tcase(s, tc);
  return s;
}