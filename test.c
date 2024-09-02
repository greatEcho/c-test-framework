#ifndef TEST
#define TEST
#include "minunit.h"
int tests_run = 0;

// the following 2 lines should be changed using your program name
#define PROGRAM "hello"
#include "hello.c"


char* test_func1()
{
  mu_assert("shoud return 5", func1(10, 5) == 5);
  mu_assert("should return 12", func1(36, 24) == 12);
  mu_assert("should return 4", func1(-28, 16) == 4);
  mu_assert("should return 6", func1(120, 66) == 6);
  return 0;
}

#if 0
char* test_func2()
{
  mu_assert("shoud return 5", func2(10, 5) == 5);
  mu_assert("should return 12", func2(36, 24) == 12);
  mu_assert("should return 4", func2(-28, 16) == 4);
  mu_assert("should return 6", func2(120, 66) == 6);
  return 0;
}
#endif

char* all_tests()
{
  mu_run_test(test_func1);
  //mu_run_test(test_func2);
  return 0;
}

int main(void)
{
  char* test_results = all_tests();

  if (test_results != 0) {
    printf("Error. Test failed. Msg: %s\n", test_results);
  }
  else {
    printf("All tests passed! (%i total tests)\n", tests_run);
  }

  return 0;
}
#endif // TEST
