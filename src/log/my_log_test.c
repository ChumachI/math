#include "../unit_test/my_math_test.h"

START_TEST(log_test_1) {
  ck_assert_ldouble_eq(my_log(16548626879.256354), log(16548626879.256354));
}
END_TEST

START_TEST(log_test_4) { ck_assert_ldouble_eq(my_log(1), log(1)); }
END_TEST

START_TEST(log_test_5) { ck_assert_ldouble_eq(my_log(3), log(3)); }
END_TEST

START_TEST(log_test_7) {
  for (double i = 1; i < E * 1000; i += 1.0)
    ck_assert_ldouble_eq_tol(my_log(i), log(i), DBL_TOLERANCE);
}
END_TEST

START_TEST(log_test_8) {
  ck_assert_ldouble_eq_tol(my_log(DBL_MAX), log(DBL_MAX), DBL_TOLERANCE);
}
END_TEST

START_TEST(log_test_9) {
  ck_assert_ldouble_nan(my_log(-DBL_MAX));
  ck_assert_ldouble_nan(log(-DBL_MAX));
}
END_TEST

START_TEST(log_test_10) {
  ck_assert_ldouble_nan(log(NAN));
  ck_assert_ldouble_nan(my_log(NAN));
}
END_TEST

START_TEST(log_test_11) {
  ck_assert_ldouble_nan(log(-NAN));
  ck_assert_ldouble_nan(my_log(-NAN));
}
END_TEST

START_TEST(log_test_12) {
  ck_assert_ldouble_infinite(log(INFINITY));
  ck_assert_ldouble_infinite(my_log(INFINITY));
}
END_TEST

START_TEST(log_test_13) {
  ck_assert_ldouble_nan(log(-INFINITY));
  ck_assert_ldouble_nan(my_log(-INFINITY));
}
END_TEST

START_TEST(log_test_14) {
  ck_assert_ldouble_infinite(log(0));
  ck_assert_ldouble_infinite(my_log(0));
}
END_TEST

START_TEST(log_test_15) {
  ck_assert_ldouble_nan(log(-1));
  ck_assert_ldouble_nan(my_log(-1));
}
END_TEST

Suite *suite_log(void) {
  Suite *s = suite_create("suite_log");
  TCase *tc = tcase_create("log_tc");
  tcase_add_test(tc, log_test_1);
  // tcase_add_test(tc, log_test_2);
  // tcase_add_test(tc, log_test_3);
  tcase_add_test(tc, log_test_4);
  tcase_add_test(tc, log_test_5);
  // tcase_add_test(tc, log_test_6);
  tcase_add_test(tc, log_test_7);
  tcase_add_test(tc, log_test_8);
  tcase_add_test(tc, log_test_9);
  tcase_add_test(tc, log_test_10);
  tcase_add_test(tc, log_test_11);
  tcase_add_test(tc, log_test_12);
  tcase_add_test(tc, log_test_13);
  tcase_add_test(tc, log_test_14);
  tcase_add_test(tc, log_test_15);
  suite_add_tcase(s, tc);
  return s;
}