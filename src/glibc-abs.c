#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("Maximum int (INT_MAX): %d\n", INT_MAX);
  printf("Minimum int (INT_MIN): %d\n", INT_MIN);
  printf("Absolute value of INT_MIN (error): %d\n", abs(INT_MIN));
}
