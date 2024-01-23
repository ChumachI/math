#include "../unit_test/my_math_test.h"

START_TEST(sqrt_test_1) {
  ck_assert_ldouble_eq_tol(my_sqrt(E), sqrt(E), DBL_TOLERANCE);
}
END_TEST

START_TEST(sqrt_test_2) {
  ck_assert_ldouble_eq_tol(my_sqrt(0), sqrt(0), DBL_TOLERANCE);
}
END_TEST

START_TEST(sqrt_test_3) {
  ck_assert_ldouble_eq_tol(my_sqrt(0.0000001), sqrt(0.0000001), DBL_TOLERANCE);
}
END_TEST

START_TEST(sqrt_test_4) { ck_assert_double_nan(my_sqrt(-144)); }
END_TEST

START_TEST(sqrt_test_5) {
  ck_assert_ldouble_eq_tol(my_sqrt(INT32_MAX), sqrt(INT32_MAX), DBL_TOLERANCE);
}
END_TEST

START_TEST(sqrt_test_6) {
  ck_assert_ldouble_nan(my_sqrt(-1));
  ck_assert_ldouble_nan(sqrt(-1));
}
END_TEST

START_TEST(sqrt_test_7) {
  ck_assert_double_nan(my_sqrt(NAN));
  ck_assert_double_nan(sqrt(NAN));
}
END_TEST

START_TEST(sqrt_test_8) {
  ck_assert_double_nan(my_sqrt(-INFINITY));
  ck_assert_double_nan(sqrt(-INFINITY));
}
END_TEST

START_TEST(sqrt_test_9) {
  ck_assert_double_eq(my_sqrt(INFINITY), sqrt(INFINITY));
}
END_TEST

Suite *suite_sqrt(void) {
  Suite *s = suite_create("suite_sqrt");
  TCase *tc = tcase_create("sqrt_tc");
  tcase_add_test(tc, sqrt_test_1);
  tcase_add_test(tc, sqrt_test_2);
  tcase_add_test(tc, sqrt_test_3);
  tcase_add_test(tc, sqrt_test_4);
  tcase_add_test(tc, sqrt_test_5);
  tcase_add_test(tc, sqrt_test_6);
  tcase_add_test(tc, sqrt_test_7);
  tcase_add_test(tc, sqrt_test_8);
  tcase_add_test(tc, sqrt_test_9);
  suite_add_tcase(s, tc);
  return s;
}
