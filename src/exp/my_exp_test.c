#include "../unit_test/my_math_test.h"

START_TEST(exp_test_1) {
  ck_assert_ldouble_eq_tol(my_exp(-1.234567890123456), exp(-1.234567890123456),
                           DBL_TOLERANCE);
}
END_TEST

START_TEST(exp_test_2) {
  ck_assert_ldouble_infinite(my_exp(16548626879.256354));
  ck_assert_ldouble_infinite(exp(16548626879.256354));
}
END_TEST

START_TEST(exp_test_3) {
  ck_assert_ldouble_eq_tol(my_exp(0.256354), exp(0.256354), DBL_TOLERANCE);
}
END_TEST

START_TEST(exp_test_4) {
  ck_assert_ldouble_eq_tol(my_exp(-0.256354), exp(-0.256354), DBL_TOLERANCE);
}
END_TEST

START_TEST(exp_test_5) {
  ck_assert_ldouble_infinite(
      my_exp(999999999999999999.99999999999999999999999));
  ck_assert_ldouble_infinite(exp(999999999999999999.99999999999999999999999));
}
END_TEST

START_TEST(exp_test_6) {
  ck_assert_ldouble_eq_tol(my_exp(0), exp(0), DBL_TOLERANCE);
}
END_TEST

// START_TEST(exp_test_7) {
//   ck_assert_ldouble_eq_tol(my_exp(-1234567890.123456),
//   exp(-1234567890.123456),
//                            DBL_TOLERANCE);
// }
// END_TEST

Suite *suite_exp(void) {
  Suite *s = suite_create("suite_exp");
  TCase *tc = tcase_create("exp_tc");
  tcase_add_test(tc, exp_test_1);
  tcase_add_test(tc, exp_test_2);
  tcase_add_test(tc, exp_test_3);
  tcase_add_test(tc, exp_test_4);
  tcase_add_test(tc, exp_test_5);
  tcase_add_test(tc, exp_test_6);
  // tcase_add_test(tc, exp_test_7);
  suite_add_tcase(s, tc);
  return s;
}
