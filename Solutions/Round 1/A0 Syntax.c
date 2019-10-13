/**********************************
  Total 4 errors
  Hint : SYNTAX ERRORS
***********************************/

#include <stdio.h>
void fn(int* x)
{   //change
  printf("\nvalue of x inside fn = %d",*x++);   //change
}   //change

void main()
{
  int x=21;
	printf("\nvalue of x before fn = %d",x);
  fn(&x);   //change
  printf("\nvalue of x after  fn = %d",x);
	return 0;
}
