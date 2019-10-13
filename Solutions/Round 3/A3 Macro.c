/**********************************
	Hint : SYNTAX ERRORS
  	Total errors = 3
***********************************/
# include <stdio.h>
# define bar() ( printf("var in bar: 10\n") )		//change

void foo()
{
  int var = 5;
  printf("var in foo: %d\n", var);    //change
  bar();		// change
	}

void main(int argc, char *argv[])
{
  foo();
}
