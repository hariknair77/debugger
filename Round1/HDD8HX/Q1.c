/**********************************
  Total 4 errors
  Hint : SYNTAX ERRORS
***********************************/

#include <stdio.h>

void fn(int * x)
printf("\nvalue of x inside fn = %d", x++);

void main() {
  int x = 21;
  printf("\nvalue of x before fn = %d", x);
  fn( & x)
  printf("\nvalue of x after  fn = %d", x);
  return 0;
}