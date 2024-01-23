#include "../unit_test/my_math_test.h"

START_TEST(cos_test_1) {
  ck_assert_ldouble_eq_tol(cos(0.4), my_cos(0.4), 1e-6);
}
END_TEST

START_TEST(test_cos_zero) {
  double x = 0.0;
  ck_assert_ldouble_eq_tol(cos(x), my_cos(x), 1e-6);
}
END_TEST

START_TEST(test_cos_negative) {
  double x = -0.4;
  ck_assert_ldouble_eq_tol(cos(x), my_cos(x), 1e-6);
}
END_TEST

START_TEST(test_cos_pi) {
  double x = M_PI;
  ck_assert_ldouble_eq_tol(cos(x), my_cos(x), 1e-6);
}
END_TEST

START_TEST(test_cos_half_pi) {
  double x = M_PI / 2;
  ck_assert_ldouble_eq_tol(cos(x), my_cos(x), 1e-6);
}
END_TEST

START_TEST(test_cos_two_pi) {
  double x = 2 * M_PI;
  ck_assert_ldouble_eq_tol(cos(x), my_cos(x), 1e-6);
}
END_TEST

START_TEST(test_cos_big_positive) {
  double x = 100.0;
  ck_assert_ldouble_eq_tol(cos(x), my_cos(x), 1e-6);
}
END_TEST

START_TEST(test_cos_big_negative) {
  double x = -100.0;
  ck_assert_ldouble_eq_tol(cos(x), my_cos(x), 1e-6);
}
END_TEST

START_TEST(test_cos_nan) {
  double x = NAN;
  ck_assert(isnan(my_cos(x)));
}
END_TEST

START_TEST(test_cos_inf) {
  double x = INFINITY;
  ck_assert(isnan(my_cos(x)));
}
END_TEST

Suite *suite_cos(void) {
  Suite *s = suite_create("suite_cos");
  TCase *tc = tcase_create("cos_tc");
  tcase_add_test(tc, cos_test_1);
  tcase_add_test(tc, test_cos_zero);
  tcase_add_test(tc, test_cos_negative);
  tcase_add_test(tc, test_cos_pi);
  tcase_add_test(tc, test_cos_half_pi);
  tcase_add_test(tc, test_cos_two_pi);
  tcase_add_test(tc, test_cos_big_positive);
  tcase_add_test(tc, test_cos_big_negative);
  tcase_add_test(tc, test_cos_nan);
  tcase_add_test(tc, test_cos_inf);

  suite_add_tcase(s, tc);
  return s;
}