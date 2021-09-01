#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "array.h"

int_array new_int_array(int size, ...) {
// Declaring pointer to the
    // argument list
    va_list args;

    // Initializing argument to the
    // list pointer
    va_start(args, size);

    int* mem = malloc(sizeof(int)*size);

    for (int i = 0; i < size; i++) {
        // Accessing current variable
        // and pointing to next
        int temp = va_arg(args, int);
        mem[i] = temp;
    }
    // End of argument list traversal
    va_end(args);
    int_array intarr = {.length = size, .items = mem};
    return intarr;
}



