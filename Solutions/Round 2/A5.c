/*************************************************************************************************
    Hint: find the largest factor of p less than or equal to n 
       LOGICAL and SYNTAX ERRORS  
    
    Total errors = 6
**************************************************************************************************/
# include <stdio.h>
void main()
{
    int n=5,i;
    int p; //change
    char val[2];

    printf ("Enter Y/N");
    scanf("%s",val);    //change
    printf("%s",val);     //change

    printf("\nEnter p:");
    scanf("%d",&p);    //change

    printf("\nEnter n:");
    scanf("%d",&n);

    for (i=1 ; p%i != 0 && i<=n ; ++i );      //change      //change
    printf("%d",i);
}
