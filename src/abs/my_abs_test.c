#include "../unit_test/my_math_test.h"

START_TEST(abs_test_1) { ck_assert_int_eq(my_abs(-144), abs(-144)); }
END_TEST

START_TEST(abs_test_2) { ck_assert_int_eq(my_abs(544), abs(544)); }
END_TEST

START_TEST(abs_test_3) { ck_assert_int_eq(my_abs(INT_MIN), abs(INT_MIN)); }
END_TEST

START_TEST(abs_test_4) { ck_assert_int_eq(my_abs(-0xA13), abs(-0xA13)); }
END_TEST

START_TEST(abs_test_5) { ck_assert_int_eq(my_abs(1), abs(1)); }
END_TEST

START_TEST(abs_test_6) { ck_assert_int_eq(my_abs(-0), abs(-0)); }
END_TEST

START_TEST(abs_test_7) { ck_assert_int_eq(my_abs(-05), abs(-05)); }
END_TEST

START_TEST(abs_test_8) {
  ck_assert_int_eq(my_abs(-002002345670), abs(-002002345670));
}
END_TEST

START_TEST(abs_test_9) { ck_assert_int_eq(my_abs(123456789), abs(123456789)); }
END_TEST

START_TEST(abs_test_10) { ck_assert_int_eq(my_abs(1000000), abs(1000000)); }
END_TEST

START_TEST(abs_test_11) { ck_assert_int_eq(my_abs(-100), abs(-100)); }
END_TEST

START_TEST(abs_test_12) { ck_assert_int_eq(my_abs(0), abs(0)); }
END_TEST

Suite *suite_abs(void) {
  Suite *s = suite_create("suite_abs");
  TCase *tc = tcase_create("abs_tc");

  tcase_add_test(tc, abs_test_1);
  tcase_add_test(tc, abs_test_2);
  tcase_add_test(tc, abs_test_3);
  tcase_add_test(tc, abs_test_4);
  tcase_add_test(tc, abs_test_5);
  tcase_add_test(tc, abs_test_6);
  tcase_add_test(tc, abs_test_7);
  tcase_add_test(tc, abs_test_8);
  tcase_add_test(tc, abs_test_9);
  tcase_add_test(tc, abs_test_10);
  tcase_add_test(tc, abs_test_11);
  tcase_add_test(tc, abs_test_12);

  suite_add_tcase(s, tc);
  return s;
}