
typedef struct {
  int length;
  double* items;
} double_array;

typedef struct {
  int length;
  char *items[];
} str_array;


typedef struct {
  int length;
  int* items;
} int_array;


int_array new_int_array(int n, ...);
