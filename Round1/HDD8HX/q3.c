/**********************************
	Total 4 errors
  Hint : Dangling else
***********************************/
#include < stdio.h >
  void main() {
    int x = 0, y = 5, z = 4;
    if (x > y)
      if (z > x)
        printf("Largest is %d", z);
      else if (x > z)
      printf("Largest is %d", x);
    else
    if (y > z)
      printf("Largest is %d", y);
    else
      printf("Largest is %d", z);
  }