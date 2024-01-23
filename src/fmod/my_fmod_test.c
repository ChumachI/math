#include "../unit_test/my_math_test.h"

START_TEST(fmod_test_1) {
  ck_assert_ldouble_eq_tol(my_fmod(10.5, 3.2), fmod(10.5, 3.2), DBL_TOLERANCE);
}
END_TEST

START_TEST(fmod_test_2) { ck_assert_ldouble_nan(my_fmod(10.5, 0)); }
END_TEST

START_TEST(fmod_test_3) {
  ck_assert_ldouble_eq_tol(my_fmod(0, 3.2), fmod(0, 3.2), DBL_TOLERANCE);
}
END_TEST

START_TEST(fmod_test_4) {
  ck_assert_ldouble_eq_tol(my_fmod(INT_MAX, 3.2), fmod(INT_MAX, 3.2),
                           DBL_TOLERANCE);
}
END_TEST

// START_TEST(fmod_test_5) {
//   ck_assert_ldouble_eq_tol(my_fmod(LONG_MAX, 3.2), fmod(LONG_MAX, 3.2),
//                            DBL_TOLERANCE);
// }
// END_TEST

// START_TEST(fmod_test_6) {
//   ck_assert_ldouble_eq_tol(my_fmod(LLONG_MAX, 3.2), fmod(LLONG_MAX, 3.2),
//                            DBL_TOLERANCE);
// }
// END_TEST

START_TEST(fmod_test_7) {
  ck_assert_ldouble_eq_tol(my_fmod(INT_MIN + 1, 3.2), fmod(INT_MIN + 1, 3.2),
                           DBL_TOLERANCE);
}
END_TEST

// START_TEST(fmod_test_8) {
//   ck_assert_ldouble_eq_tol(my_fmod(LONG_MIN, 3.2), fmod(LONG_MIN, 3.2),
//                            DBL_TOLERANCE);
// }
// END_TEST

// START_TEST(fmod_test_9) {
//   ck_assert_ldouble_eq_tol(my_fmod(LLONG_MIN, 3.2), fmod(LLONG_MIN, 3.2),
//                            DBL_TOLERANCE);
// }
// END_TEST

START_TEST(fmod_test_10) {
  ck_assert_ldouble_eq_tol(my_fmod(123.456789, 3.2), fmod(123.456789, 3.2),
                           DBL_TOLERANCE);
}
END_TEST

START_TEST(fmod_test_11) {
  ck_assert_ldouble_eq_tol(my_fmod(3.2, 123.456789), fmod(3.2, 123.456789),
                           DBL_TOLERANCE);
}
END_TEST

START_TEST(fmod_test_12) {
  ck_assert_ldouble_eq_tol(my_fmod(3.2, 999999999999999999.456789),
                           fmod(3.2, 999999999999999999.456789), DBL_TOLERANCE);
}
END_TEST

START_TEST(fmod_test_13) {
  ck_assert_ldouble_eq_tol(my_fmod(999999999.456789, 3.2),
                           fmod(999999999.456789, 3.2), DBL_TOLERANCE);
}
END_TEST

START_TEST(fmod_test_14) {
  ck_assert_ldouble_nan(fmod(NAN, 3.2));
  ck_assert_ldouble_nan(my_fmod(NAN, 3.2));
}
END_TEST

START_TEST(fmod_test_15) {
  ck_assert_ldouble_nan(fmod(-NAN, 3.2));
  ck_assert_ldouble_nan(my_fmod(-NAN, 3.2));
}
END_TEST

START_TEST(fmod_test_16) {
  ck_assert_ldouble_nan(fmod(3.2, NAN));
  ck_assert_ldouble_nan(my_fmod(3.2, NAN));
}
END_TEST

START_TEST(fmod_test_17) {
  ck_assert_ldouble_nan(fmod(3.2, -NAN));
  ck_assert_ldouble_nan(my_fmod(3.2, -NAN));
}
END_TEST

START_TEST(fmod_test_18) {
  ck_assert_ldouble_nan(fmod(NAN, -NAN));
  ck_assert_ldouble_nan(my_fmod(NAN, -NAN));
}
END_TEST

START_TEST(fmod_test_19) {
  ck_assert_ldouble_nan(fmod(-NAN, -NAN));
  ck_assert_ldouble_nan(my_fmod(-NAN, -NAN));
}
END_TEST

START_TEST(fmod_test_20) {
  ck_assert_ldouble_nan(fmod(NAN, NAN));
  ck_assert_ldouble_nan(my_fmod(NAN, NAN));
}
END_TEST

START_TEST(fmod_test_21) {
  ck_assert_ldouble_nan(fmod(INFINITY, NAN));
  ck_assert_ldouble_nan(my_fmod(INFINITY, NAN));
}
END_TEST

START_TEST(fmod_test_22) {
  ck_assert_ldouble_nan(fmod(INFINITY, 0));
  ck_assert_ldouble_nan(my_fmod(INFINITY, 0));
}
END_TEST

START_TEST(fmod_test_23) {
  ck_assert_ldouble_nan(fmod(INFINITY, 1));
  ck_assert_ldouble_nan(my_fmod(INFINITY, 1));
}
END_TEST

START_TEST(fmod_test_24) {
  ck_assert_ldouble_nan(fmod(-INFINITY, 0));
  ck_assert_ldouble_nan(my_fmod(-INFINITY, 0));
}
END_TEST

START_TEST(fmod_test_25) {
  ck_assert_ldouble_nan(fmod(-INFINITY, 1));
  ck_assert_ldouble_nan(my_fmod(-INFINITY, 1));
}
END_TEST

START_TEST(fmod_test_26) {
  ck_assert_ldouble_nan(fmod(-INFINITY, INFINITY));
  ck_assert_ldouble_nan(my_fmod(-INFINITY, INFINITY));
}
END_TEST

START_TEST(fmod_test_27) {
  ck_assert_ldouble_nan(fmod(INFINITY, INFINITY));
  ck_assert_ldouble_nan(my_fmod(INFINITY, INFINITY));
}
END_TEST

START_TEST(fmod_test_28) {
  ck_assert_ldouble_nan(fmod(INFINITY, -INFINITY));
  ck_assert_ldouble_nan(my_fmod(INFINITY, -INFINITY));
}
END_TEST

START_TEST(fmod_test_29) {
  ck_assert_ldouble_nan(fmod(INFINITY, 0));
  ck_assert_ldouble_nan(my_fmod(INFINITY, 0));
}
END_TEST

START_TEST(fmod_test_30) {
  ck_assert_ldouble_nan(fmod(INFINITY, 3.2));
  ck_assert_ldouble_nan(my_fmod(INFINITY, 3.2));
}
END_TEST

START_TEST(fmod_test_31) {
  ck_assert_double_eq_tol(my_fmod(1, INFINITY), fmod(1, INFINITY), 0.000001);
}
END_TEST

Suite *suite_fmod(void) {
  Suite *s = suite_create("suite_fmod");
  TCase *tc = tcase_create("fmod_tc");
  tcase_add_test(tc, fmod_test_1);
  tcase_add_test(tc, fmod_test_2);
  tcase_add_test(tc, fmod_test_3);
  tcase_add_test(tc, fmod_test_4);
  // tcase_add_test(tc, fmod_test_5);
  // tcase_add_test(tc, fmod_test_6);
  tcase_add_test(tc, fmod_test_7);
  // tcase_add_test(tc, fmod_test_8);
  // tcase_add_test(tc, fmod_test_9);
  tcase_add_test(tc, fmod_test_10);
  tcase_add_test(tc, fmod_test_11);
  tcase_add_test(tc, fmod_test_12);
  tcase_add_test(tc, fmod_test_13);
  tcase_add_test(tc, fmod_test_14);
  tcase_add_test(tc, fmod_test_15);
  tcase_add_test(tc, fmod_test_16);
  tcase_add_test(tc, fmod_test_17);
  tcase_add_test(tc, fmod_test_18);
  tcase_add_test(tc, fmod_test_19);
  tcase_add_test(tc, fmod_test_20);
  tcase_add_test(tc, fmod_test_21);
  tcase_add_test(tc, fmod_test_22);
  tcase_add_test(tc, fmod_test_23);
  tcase_add_test(tc, fmod_test_24);
  tcase_add_test(tc, fmod_test_25);
  tcase_add_test(tc, fmod_test_26);
  tcase_add_test(tc, fmod_test_27);
  tcase_add_test(tc, fmod_test_28);
  tcase_add_test(tc, fmod_test_29);
  tcase_add_test(tc, fmod_test_30);
  tcase_add_test(tc, fmod_test_31);
  suite_add_tcase(s, tc);
  return s;
}
