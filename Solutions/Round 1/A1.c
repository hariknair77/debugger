/**********************************
  Hint : SYNTAX ERRORS
  Total 2 errors 
***********************************/
# include <stdio.h>
void main()
{
  int x=0,y=5,z=4;
  if (x>y)
  {         //change
  if (z>x)
      printf("Largest is %d",z);
  else if (x>z)
      printf("Largest is %d",x);
  }         //change
  else
  {         //change
    if (y>z)
      printf("Largest is %d",y);
  else
      printf("Largest is %d",z);
  }         //change
}
