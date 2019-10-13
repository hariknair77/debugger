/**********************************
  Hint : Binary Search
  Total 6 errors
***********************************/
# include <stdio.h>
# include <stdlib.h>

int main(int argc, char const *argv[]) {

  int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};    //change
  int beg=0;
  int end=15;   //change
  int mid;
  int element = 13;

  while(beg!=end)
  {
      mid = (beg+end)/2;    //change
      if ( a[mid]>element )
        end = mid-1;  //change
      else  if ( a[mid]<element )
        beg = mid+1;    //change
      else
      {
        printf("FOUND");
        exit(0);    //change
      }
  }
  printf("NOT FOUND");
}
