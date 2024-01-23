#include "../my_math.h"

#include <check.h>
#include <limits.h>
#include <math.h>

#include "my_math_test.h"

int main() {
  int number_failed;
  Suite *s, *f, *c, *pw, *fb, *sqr, *coss, *sinn, *tann, *log, *fm, *atan,
      *expp, *asinn, *acoss;
  SRunner *sr;
  s = suite_abs();
  f = suite_floor();
  c = suite_ceil();
  fm = suite_fmod();
  pw = suite_pow();
  fb = suite_fabs();
  log = suite_log();
  expp = suite_exp();
  sqr = suite_sqrt();
  coss = suite_cos();
  sinn = suite_sin();
  tann = suite_tan();
  atan = suite_atan();
  asinn = suite_asin();
  acoss = suite_acos();
  sr = srunner_create(s);
  srunner_add_suite(sr, f);
  srunner_add_suite(sr, c);
  srunner_add_suite(sr, fm);
  srunner_add_suite(sr, pw);
  srunner_add_suite(sr, fb);
  srunner_add_suite(sr, log);
  srunner_add_suite(sr, sqr);
  srunner_add_suite(sr, expp);
  srunner_add_suite(sr, coss);
  srunner_add_suite(sr, sinn);
  srunner_add_suite(sr, tann);
  srunner_add_suite(sr, atan);
  srunner_add_suite(sr, asinn);
  srunner_add_suite(sr, acoss);
  srunner_set_fork_status(sr, CK_NOFORK);
  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);
  return (number_failed == 0) ? 0 : 1;
}