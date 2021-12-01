#include <stdio.h>

int  incrementCountReturn (int count);

int
main(void)
{
	int count = 10;
	
	printf("In main, before calling function incrementCountReturn, count = %d\n\n", count);
	count = incrementCountReturn(count);
	printf("In main, after calling function incrementCountReturn, count = %d\n", count);

	return (0);
	
}

int
incrementCountReturn(int c)
{
	printf("In function incrementCountReturn, before incrementing, c = %d\n", c);
	c++;
	printf("In function incrementCountReturn, after incrementing, c = %d\n\n", c);
	
	return (c);
}
