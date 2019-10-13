/*************************************************************************************************
  Hint : Program to print 1 2 3 3 2 1 1 2 3 3 2 1 1 2 3 3 2 1
  Find the Logical Error

  Total 4 errors
**************************************************************************************************/
# include <stdio.h>
void main()
{
  int x;
  for(x=0; x<6; x++)    //change
  {
    if (x%2!=0)
      goto L;
  N:
    printf("1 ");
    if (x%2!=0)
      continue;    //change
  M:
    printf("2 ");
    if (x%2!=0)
      goto N;    //change
  L:
    printf("3 ");
    if (x%2!=0)
      goto M;    //change
  }
}
