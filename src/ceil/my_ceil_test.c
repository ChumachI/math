#include "../unit_test/my_math_test.h"

START_TEST(ceil_test_1) {
  ck_assert_ldouble_eq(my_ceil(-16548626879.256312354),
                       ceil(-16548626879.256312354));
}
END_TEST

START_TEST(ceil_test_2) {
  ck_assert_ldouble_eq(my_ceil(16548626879.256354), ceil(16548626879.256354));
}
END_TEST

START_TEST(ceil_test_3) {
  ck_assert_ldouble_eq(my_ceil(0.256354), ceil(0.256354));
}
END_TEST

START_TEST(ceil_test_4) {
  ck_assert_ldouble_eq(my_ceil(-0.256354), ceil(-0.256354));
}
END_TEST

START_TEST(ceil_test_5) {
  ck_assert_ldouble_eq(my_ceil(999999999999999999.99999999999999999999999),
                       ceil(999999999999999999.99999999999999999999999));
}
END_TEST

START_TEST(ceil_test_6) {
  ck_assert_ldouble_eq(my_ceil(-999999999999999999.99999999999999999999999),
                       ceil(-999999999999999999.99999999999999999999999));
}
END_TEST

START_TEST(ceil_test_7) {
  ck_assert_double_nan(my_ceil(NAN));
  ck_assert_double_nan(ceil(NAN));
}
END_TEST

START_TEST(ceil_test_8) {
  ck_assert_double_infinite(my_ceil(-INFINITY));
  ck_assert_double_infinite(ceil(-INFINITY));
}
END_TEST

Suite *suite_ceil(void) {
  Suite *s = suite_create("suite_ceil");
  TCase *tc = tcase_create("ceil_tc");
  tcase_add_test(tc, ceil_test_1);
  tcase_add_test(tc, ceil_test_2);
  tcase_add_test(tc, ceil_test_3);
  tcase_add_test(tc, ceil_test_4);
  tcase_add_test(tc, ceil_test_5);
  tcase_add_test(tc, ceil_test_6);
  tcase_add_test(tc, ceil_test_7);
  tcase_add_test(tc, ceil_test_8);
  suite_add_tcase(s, tc);
  return s;
}
