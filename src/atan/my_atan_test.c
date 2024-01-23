#include "../unit_test/my_math_test.h"

START_TEST(test_atan_positive) {
  double x = 0.4;
  ck_assert_ldouble_eq_tol(atan(x), my_atan(x), 1e-6);
}
END_TEST

START_TEST(test_atan_negative) {
  double x = -0.4;
  ck_assert_ldouble_eq_tol(atan(x), my_atan(x), 1e-6);
}
END_TEST

START_TEST(test_atan_zero) {
  double x = 0;
  ck_assert_ldouble_eq_tol(atan(x), my_atan(x), 1e-6);
}
END_TEST

START_TEST(test_atan_one) {
  double x = -0.0;
  ck_assert_ldouble_eq_tol(atan(x), my_atan(x), 1e-6);
}
END_TEST

START_TEST(test_atan_one_negative) {
  double x = -1;
  ck_assert_ldouble_eq_tol(atan(x), my_atan(x), 1e-6);
}
END_TEST

START_TEST(test_atan_one_pos) {
  double x = 1;
  ck_assert_ldouble_eq_tol(atan(x), my_atan(x), 1e-6);
}
END_TEST

START_TEST(test_atan_huge_positive) {
  double x = 1000000000;
  ck_assert_ldouble_eq_tol(atan(x), my_atan(x), 1e-6);
}
END_TEST

START_TEST(test_atan_big_mantissa) {
  double x = 0.923456789012345678901234567890;
  ck_assert_ldouble_eq_tol(atan(x), my_atan(x), 1e-6);
}
END_TEST

START_TEST(test_atan_nan) {
  double x = my_NAN;
  ck_assert_ldouble_nan(my_atan(x));
}
END_TEST

START_TEST(test_atan_loop_values) {
  double i = _i;
  ck_assert_ldouble_eq_tol(atan(i / 20.0), my_atan(i / 20.0), 1e-6);
}
END_TEST

START_TEST(my_atan_test_5) {
  ck_assert_double_eq_tol(my_atan(-INFINITY), atan(-INFINITY), 0.000001);
}
END_TEST

START_TEST(my_atan_test_6) {
  ck_assert_double_eq_tol(my_atan(INFINITY), atan(INFINITY), 0.000001);
}
END_TEST

Suite *suite_atan(void) {
  Suite *s = suite_create("suite_atan");
  TCase *tc = tcase_create("atan_tc");

  tcase_add_test(tc, test_atan_positive);
  tcase_add_test(tc, test_atan_negative);
  tcase_add_test(tc, test_atan_zero);
  tcase_add_test(tc, test_atan_one);
  tcase_add_test(tc, test_atan_one_negative);
  tcase_add_test(tc, test_atan_huge_positive);
  tcase_add_test(tc, test_atan_big_mantissa);
  tcase_add_test(tc, test_atan_nan);
  tcase_add_loop_test(tc, test_atan_loop_values, -10, 10);
  tcase_add_test(tc, test_atan_one_pos);
  tcase_add_test(tc, my_atan_test_5);
  tcase_add_test(tc, my_atan_test_6);

  suite_add_tcase(s, tc);
  return s;
}