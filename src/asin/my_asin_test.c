#include "../unit_test/my_math_test.h"

START_TEST(test_asin_positive) {
  double x = 0.4;
  ck_assert_ldouble_eq_tol(asin(x), my_asin(x), 1e-6);
}
END_TEST

START_TEST(test_asin_negative) {
  double x = -0.4;
  ck_assert_ldouble_eq_tol(asin(x), my_asin(x), 1e-6);
}
END_TEST

START_TEST(test_asin_zero) {
  double x = 0.0;
  ck_assert_ldouble_eq_tol(asin(x), my_asin(x), 1e-6);
}
END_TEST

START_TEST(test_asin_one) {
  double x = -0.0;
  ck_assert_ldouble_eq_tol(asin(x), my_asin(x), 1e-6);
}
END_TEST

START_TEST(test_asin_one_negative) {
  double x = -1;
  ck_assert_ldouble_eq_tol(asin(x), my_asin(x), 1e-6);
}
END_TEST

START_TEST(test_asin_one_pose) {
  double x = 1;
  ck_assert_ldouble_eq_tol(asin(x), my_asin(x), 1e-6);
}
END_TEST

START_TEST(test_asin_huge_positive) {
  double x = 5;
  ck_assert_ldouble_nan(my_asin(x));
}
END_TEST

START_TEST(test_asin_huge_negative) {
  double x = -5;
  ck_assert_ldouble_nan(my_asin(x));
}
END_TEST

START_TEST(test_asin_big_mantissa) {
  double x = 0.123456789012345678901234567890;
  ck_assert_ldouble_eq_tol(asin(x), my_asin(x), 1e-6);
}
END_TEST

START_TEST(test_asin_nan) {
  double x = my_NAN;
  ck_assert_ldouble_nan(my_asin(x));
}
END_TEST

START_TEST(test_asin_inf) {
  double x = my_INF;
  ck_assert_ldouble_nan(my_asin(x));
}
END_TEST

Suite *suite_asin(void) {
  Suite *s = suite_create("suite_asin");
  TCase *tc = tcase_create("asin_tc");

  tcase_add_test(tc, test_asin_positive);
  tcase_add_test(tc, test_asin_negative);
  tcase_add_test(tc, test_asin_zero);
  tcase_add_test(tc, test_asin_one);
  tcase_add_test(tc, test_asin_negative);
  tcase_add_test(tc, test_asin_one_negative);
  tcase_add_test(tc, test_asin_huge_positive);
  tcase_add_test(tc, test_asin_huge_negative);
  tcase_add_test(tc, test_asin_big_mantissa);
  tcase_add_test(tc, test_asin_nan);
  tcase_add_test(tc, test_asin_inf);
  tcase_add_test(tc, test_asin_one_pose);

  suite_add_tcase(s, tc);
  return s;
}