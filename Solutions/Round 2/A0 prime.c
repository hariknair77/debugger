/**********************************
	Hint : SYNTAX ERROR
	Total 3 errors
***********************************/
# include <stdio.h>
void main()
{
  int
    n=7;

  for (int i=2; i< n/2; i+=1)   // change
    if (n%i == 0 && printf("Not Prime"))    // change
        goto E;

  printf("Prime");
  E:;   // change
}
