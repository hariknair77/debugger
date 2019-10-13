/**********************************
  Hint : selection Sort
  Total errors = 7
***********************************/
# include <stdio.h>
# include <stdlib.h>

int main(int argc, char const *argv[]) {  //change

  int a[]={1,12,30,42,54,26,47,38,79,90,1,22,3,14,15};    //change
  int i,j,max,n=15;

  printf("Sorted list is: ");
  for (i=0;i<n;i++)
  {
    max=i;    //change
    for (j=i+1;j<n;j++) //change
      if (a[max]<a[j])    //change
        max=j;

    if (max!=i)   //change
    {
      int tmp = a[max];   //change
      a[max] = a[i];
      a[i] = tmp;
    }
    printf("%d ",a[i]);
  }

}
