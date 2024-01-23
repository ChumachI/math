#include "../unit_test/my_math_test.h"

START_TEST(floor_test_1) {
  ck_assert_ldouble_eq(my_floor(-16548626879.256312354),
                       floor(-16548626879.256312354));
}
END_TEST

START_TEST(floor_test_2) {
  ck_assert_ldouble_eq(my_floor(16548626879.256354),
                       floor(16548626879.256354));
}
END_TEST

START_TEST(floor_test_3) {
  ck_assert_ldouble_eq(my_floor(0.256354), floor(0.256354));
}
END_TEST

START_TEST(floor_test_4) {
  ck_assert_ldouble_eq(my_floor(-0.256354), floor(-0.256354));
}
END_TEST

START_TEST(floor_test_5) {
  ck_assert_ldouble_eq(my_floor(999999999999999999.99999999999999999999999),
                       floor(999999999999999999.99999999999999999999999));
}
END_TEST

START_TEST(floor_test_6) {
  ck_assert_ldouble_eq(my_floor(-999999999999999999.99999999999999999999999),
                       floor(-999999999999999999.99999999999999999999999));
}
END_TEST

START_TEST(floor_test_7) {
  ck_assert_double_nan(my_floor(NAN));
  ck_assert_double_nan(floor(NAN));
}
END_TEST

START_TEST(floor_test_8) {
  ck_assert_double_eq(my_floor(INFINITY), floor(INFINITY));
}
END_TEST

START_TEST(floor_test_9) {
  ck_assert_double_eq(my_floor(-INFINITY), floor(-INFINITY));
}
END_TEST

Suite *suite_floor(void) {
  Suite *s = suite_create("suite_floor");
  TCase *tc = tcase_create("floor_tc");
  tcase_add_test(tc, floor_test_1);
  tcase_add_test(tc, floor_test_2);
  tcase_add_test(tc, floor_test_3);
  tcase_add_test(tc, floor_test_4);
  tcase_add_test(tc, floor_test_5);
  tcase_add_test(tc, floor_test_6);
  tcase_add_test(tc, floor_test_7);
  tcase_add_test(tc, floor_test_8);
  tcase_add_test(tc, floor_test_9);
  suite_add_tcase(s, tc);
  return s;
}
