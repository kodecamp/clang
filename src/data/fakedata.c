#include <stdio.h>
#include <stdlib.h>
#include "./fakedata.h"

int_array gen_nums(const int from_inclusive,const int upto_inclusive) {
  int length = upto_inclusive - from_inclusive + 1;
  printf("gen_nums : %i \n", length);

  int *nums = (int*)malloc(sizeof(int)*length);

  printf("before : %i \n", length);
  for(int i = 0, counter = from_inclusive; i < length; i++){
    nums[i] = counter;
    counter++;
  }
  const int_array array = {.length = length, .items = nums};
  return array;
}

int_array gen_nums_fn(const int count,int (*fn)(int next)) {
  int *nums = (int*)malloc(sizeof(int)*count);
  for(int i = 0 ; i < count; i++){
    nums[i] = fn(i);
  }
  const int_array array = {.length = count, .items = nums};
  return array;
}
