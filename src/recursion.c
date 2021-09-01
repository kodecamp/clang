#include <stdio.h>

int fact(int number, int step_rs);
int test(int number, int fn(int, int));
int test2(int number , int fn(int ,int));

typedef int (*fn)(int, int);

int main() {
  int x = 10, y = 20;
  int *ptrs[2] = {&x, &y};
  printf("x = %p, y = %p \n", ptrs[0], ptrs[1]);
  printf("x = %i, y = %i \n", *ptrs[0], *ptrs[1]);
  int n = 5;
  int rs = fact(n, 1);
  printf("fact(%i) = %i \n", n, rs);
  rs = test(5, fact);
  rs = test2(5, fact);
  printf("rs(%i) = %i \n", n, rs);

  return 0;
}

int test(int number , int fn(int ,int)) {
  return fn(number,1);
}

int test2(int number , int fn(int ,int)) {
  return number * fn(number,1);
}

int take(int number) {
  return number;
}

int fact(int number, int step_rs) {
  if(number == 0 || number == 1) {
    return step_rs;
  }
  return fact(number - 1,  step_rs* number);
}
