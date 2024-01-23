#include "../unit_test/my_math_test.h"

START_TEST(fabs_test_1) {
  ck_assert_ldouble_eq(my_fabs(-16548626879.256312354),
                       fabs(-16548626879.256312354));
}
END_TEST

START_TEST(fabs_test_2) {
  ck_assert_ldouble_eq(my_fabs(16548626879.256354), fabs(16548626879.256354));
}
END_TEST

START_TEST(fabs_test_3) {
  ck_assert_ldouble_eq(my_fabs(0.256354), fabs(0.256354));
}
END_TEST

START_TEST(fabs_test_4) {
  ck_assert_ldouble_eq(my_fabs(-0.256354), fabs(-0.256354));
}
END_TEST

START_TEST(fabs_test_5) {
  ck_assert_ldouble_eq(my_fabs(999999999999999999.99999999999999999999999),
                       fabs(999999999999999999.99999999999999999999999));
}
END_TEST

START_TEST(fabs_test_6) {
  ck_assert_ldouble_eq(my_fabs(-999999999999999999.99999999999999999999999),
                       fabs(-999999999999999999.99999999999999999999999));
}
END_TEST

Suite *suite_fabs(void) {
  Suite *s = suite_create("suite_fabs");
  TCase *tc = tcase_create("fabs_tc");
  tcase_add_test(tc, fabs_test_1);
  tcase_add_test(tc, fabs_test_2);
  tcase_add_test(tc, fabs_test_3);
  tcase_add_test(tc, fabs_test_4);
  tcase_add_test(tc, fabs_test_5);
  tcase_add_test(tc, fabs_test_6);
  suite_add_tcase(s, tc);
  return s;
}