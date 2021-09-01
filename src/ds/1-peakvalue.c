#include <stdio.h>
#include <stdlib.h>
#include "../data/fakedata.h"

int generator (int index);

int main() {
  /* int* nums = gen_nums(1, 10); */
  const int_array array = gen_nums_fn(5, generator);
  /* printf("length = %i \n", array.length); */
  for(int i = 0; i < array.length; i++) {
    printf("value[%i] = %i \n", i, array.items[i]);
  }
  free(array.items);
   printf(" ------------------------- \n");

  int_array numbers  = new_int_array(5, 10,20,30,40,50);
  for(int i = 0; i < numbers.length; i++) {
    printf(" numbers[%i] = %i \n", i, numbers.items[i]);
  }

}

int generator(int index) {
 return 10*index;
}


