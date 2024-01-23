#include "../unit_test/my_math_test.h"

START_TEST(pow_test_1) {
  ck_assert_ldouble_eq_tol(my_pow(10.5, 3), pow(10.5, 3), DBL_TOLERANCE);
}
END_TEST

START_TEST(pow_test_2) {
  ck_assert_ldouble_eq_tol(my_pow(10.5, 0), pow(10.5, 0), DBL_TOLERANCE);
}
END_TEST

START_TEST(pow_test_3) {
  ck_assert_ldouble_eq_tol(my_pow(0, 3.2), pow(0, 3.2), DBL_TOLERANCE);
}
END_TEST

START_TEST(pow_test_4) {
  ck_assert_ldouble_eq_tol(my_pow(INT8_MAX, 3.2), pow(INT8_MAX, 3.2),
                           DBL_TOLERANCE);
}
END_TEST

START_TEST(pow_test_5) {
  ck_assert_ldouble_eq_tol(my_pow(123.456789, 3.2), pow(123.456789, 3.2),
                           DBL_TOLERANCE);
}
END_TEST

START_TEST(pow_test_6) {
  ck_assert_ldouble_eq_tol(my_pow(123.1234, 3.2), pow(123.1234, 3.2),
                           DBL_TOLERANCE);
}
END_TEST

// START_TEST(pow_test_7) {
//   ck_assert_ldouble_eq_tol(my_pow(12345.12345, -3.2), pow(12345.12345,
//   -3.2),
//                            DBL_TOLERANCE);
// }
// END_TEST

START_TEST(pow_test_8) {
  ck_assert_ldouble_nan(my_pow(12345.12345, NAN));
  ck_assert_ldouble_nan(pow(12345.12345, NAN));
}
END_TEST

START_TEST(pow_test_9) {
  ck_assert_ldouble_nan(my_pow(12345.12345, -NAN));
  ck_assert_ldouble_nan(pow(12345.12345, -NAN));
}
END_TEST

START_TEST(pow_test_10) {
  ck_assert_ldouble_eq_tol(my_pow(0, 0), pow(0, 0), DBL_TOLERANCE);
}
END_TEST

START_TEST(pow_test_11) {
  ck_assert_double_infinite(my_pow(0, -INFINITY));
  ck_assert_double_infinite(pow(0, -INFINITY));
}
END_TEST

START_TEST(pow_test_12) {
  ck_assert_ldouble_eq_tol(my_pow(-1, INFINITY), pow(-1, INFINITY),
                           DBL_TOLERANCE);
}
END_TEST

START_TEST(pow_test_13) {
  ck_assert_ldouble_eq_tol(my_pow(-1, -INFINITY), pow(-1, -INFINITY),
                           DBL_TOLERANCE);
}
END_TEST

START_TEST(pow_test_14) {
  ck_assert_ldouble_eq_tol(my_pow(1, -INFINITY), pow(1, -INFINITY),
                           DBL_TOLERANCE);
}
END_TEST

START_TEST(pow_test_15) {
  ck_assert_ldouble_eq_tol(my_pow(1, INFINITY), pow(1, INFINITY),
                           DBL_TOLERANCE);
}
END_TEST

START_TEST(pow_test_16) {
  ck_assert_ldouble_eq_tol(my_pow(1, NAN), pow(1, NAN), DBL_TOLERANCE);
}
END_TEST

START_TEST(pow_test_17) {
  ck_assert_ldouble_eq_tol(my_pow(1, -NAN), pow(1, -NAN), DBL_TOLERANCE);
}
END_TEST

START_TEST(pow_test_18) {
  ck_assert_ldouble_eq_tol(my_pow(1, 0), pow(1, 0), DBL_TOLERANCE);
}
END_TEST

START_TEST(pow_test_19) {
  ck_assert_ldouble_eq_tol(my_pow(1, 3.2), pow(1, 3.2), DBL_TOLERANCE);
}
END_TEST

START_TEST(pow_test_20) {
  ck_assert_ldouble_eq_tol(my_pow(NAN, 0), pow(NAN, 0), DBL_TOLERANCE);
}
END_TEST

START_TEST(pow_test_21) {
  ck_assert_ldouble_eq_tol(my_pow(-NAN, 0), pow(-NAN, 0), DBL_TOLERANCE);
}
END_TEST

START_TEST(pow_test_22) {
  ck_assert_ldouble_eq_tol(my_pow(INFINITY, 0), pow(INFINITY, 0),
                           DBL_TOLERANCE);
}
END_TEST

START_TEST(pow_test_23) {
  ck_assert_ldouble_eq_tol(my_pow(-INFINITY, 0), pow(-INFINITY, 0),
                           DBL_TOLERANCE);
}
END_TEST

START_TEST(pow_test_24) {
  ck_assert_ldouble_eq_tol(my_pow(0.12345, INFINITY), pow(0.12345, INFINITY),
                           DBL_TOLERANCE);
}
END_TEST

START_TEST(pow_test_25) {
  ck_assert_double_infinite(my_pow(0.12345, -INFINITY));
  ck_assert_double_infinite(pow(0.12345, -INFINITY));
}
END_TEST

START_TEST(pow_test_26) {
  ck_assert_double_infinite(my_pow(12345, INFINITY));
  ck_assert_double_infinite(pow(12345, INFINITY));
}
END_TEST

START_TEST(pow_test_27) {
  ck_assert_ldouble_eq_tol(my_pow(12345, -INFINITY), pow(12345, -INFINITY),
                           DBL_TOLERANCE);
}
END_TEST

START_TEST(pow_test_28) {
  ck_assert_ldouble_eq_tol(my_pow(0.12345, INFINITY), pow(0.12345, INFINITY),
                           DBL_TOLERANCE);
}
END_TEST

START_TEST(pow_test_29) {
  ck_assert_double_infinite(my_pow(-0.12345, -INFINITY));
  ck_assert_double_infinite(pow(-0.12345, -INFINITY));
}
END_TEST

START_TEST(pow_test_30) {
  ck_assert_double_infinite(pow(-12345, INFINITY));
  ck_assert_double_infinite(my_pow(-12345, INFINITY));
}
END_TEST

START_TEST(pow_test_31) {
  ck_assert_ldouble_eq_tol(my_pow(-12345, -INFINITY), pow(-12345, -INFINITY),
                           DBL_TOLERANCE);
}
END_TEST

START_TEST(pow_test_32) {
  ck_assert_ldouble_eq_tol(my_pow(INFINITY, 0), pow(INFINITY, 0),
                           DBL_TOLERANCE);
}
END_TEST

START_TEST(pow_test_33) {
  ck_assert_ldouble_eq_tol(my_pow(-INFINITY, 0), pow(-INFINITY, 0),
                           DBL_TOLERANCE);
}
END_TEST

START_TEST(pow_test_34) {
  ck_assert_double_infinite(my_pow(INFINITY, INFINITY));
  ck_assert_double_infinite(pow(INFINITY, INFINITY));
}
END_TEST

START_TEST(pow_test_35) {
  ck_assert_double_infinite(my_pow(-INFINITY, INFINITY));
  ck_assert_double_infinite(pow(-INFINITY, INFINITY));
}
END_TEST

START_TEST(pow_test_36) {
  ck_assert_double_nan(pow(-INFINITY, NAN));
  ck_assert_double_nan(my_pow(-INFINITY, NAN));
}
END_TEST

START_TEST(pow_test_37) {
  ck_assert_ldouble_nan(my_pow(NAN, NAN));
  ck_assert_ldouble_nan(pow(NAN, NAN));
}
END_TEST

START_TEST(pow_test_38) {
  ck_assert_double_eq_tol(my_pow(0.223, 0.1245), pow(0.223, 0.1245), 0.000001);
}
END_TEST

START_TEST(pow_test_39) {
  ck_assert_double_eq_tol(my_pow(-1, 2), pow(-1, 2), 0.000001);
}
END_TEST

START_TEST(pow_test_40) {
  ck_assert_double_eq_tol(my_pow(-4, 3), pow(-4, 3), 0.000001);
}
END_TEST

Suite *suite_pow(void) {
  Suite *s = suite_create("suite_pow");
  TCase *tc = tcase_create("pow_tc");
  tcase_add_test(tc, pow_test_1);
  tcase_add_test(tc, pow_test_2);
  tcase_add_test(tc, pow_test_3);
  tcase_add_test(tc, pow_test_4);
  tcase_add_test(tc, pow_test_5);
  tcase_add_test(tc, pow_test_6);
  // tcase_add_test(tc, pow_test_7);
  tcase_add_test(tc, pow_test_8);
  tcase_add_test(tc, pow_test_9);
  tcase_add_test(tc, pow_test_10);
  tcase_add_test(tc, pow_test_11);
  tcase_add_test(tc, pow_test_12);
  tcase_add_test(tc, pow_test_13);
  tcase_add_test(tc, pow_test_14);
  tcase_add_test(tc, pow_test_15);
  tcase_add_test(tc, pow_test_16);
  tcase_add_test(tc, pow_test_17);
  tcase_add_test(tc, pow_test_18);
  tcase_add_test(tc, pow_test_19);
  tcase_add_test(tc, pow_test_20);
  tcase_add_test(tc, pow_test_21);
  tcase_add_test(tc, pow_test_22);
  tcase_add_test(tc, pow_test_23);
  tcase_add_test(tc, pow_test_24);
  tcase_add_test(tc, pow_test_25);
  tcase_add_test(tc, pow_test_26);
  tcase_add_test(tc, pow_test_27);
  tcase_add_test(tc, pow_test_28);
  tcase_add_test(tc, pow_test_29);
  tcase_add_test(tc, pow_test_30);
  tcase_add_test(tc, pow_test_31);
  tcase_add_test(tc, pow_test_32);
  tcase_add_test(tc, pow_test_33);
  tcase_add_test(tc, pow_test_34);
  tcase_add_test(tc, pow_test_35);
  tcase_add_test(tc, pow_test_36);
  tcase_add_test(tc, pow_test_37);
  tcase_add_test(tc, pow_test_38);
  tcase_add_test(tc, pow_test_39);
  tcase_add_test(tc, pow_test_40);
  suite_add_tcase(s, tc);
  return s;
}
