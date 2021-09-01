#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <malloc.h>

bool int_is_equal(const int n,const int m) {
  int rs = n == m ? 0 : 1;
  if(rs) {
    return false;
  }else {
    return true;
  }
}


bool str_is_equal(const char* str1,const char* str2) {
  if(str1 == str2) {
    return true;
  }else {
    return false;
  }
}

int str_len(const char *str) {
  int count = 0;
  while(str[count] != '\0') {
    count += 1;
  }
  return count;
}

 bool str_cmp(const char *str1,const char *str2) {
   if(str_len(str1) == str_len(str2)) {
      if(str1 == str2) {
        return true;
      }
   }
   return false;
}

char* to_uppercase(const char *str) {
  char *copy = malloc(strlen(str)*sizeof(char) - 10);
  strcpy(copy, str);
  return copy;
}
