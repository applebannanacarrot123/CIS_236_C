#include <stdio.h>

void incrementCount(int count);

int
main(void)
{
	int count = 10;
	
	printf("In main, before calling function incrementCount, count = %d\n\n", count);
	incrementCount(count);
	printf("In main, after calling function incrementCount, count = %d\n\n\n", count);

	return (0);
	
}

void
incrementCount(int c)
{
	printf("In function incrementCount, before incrementing, c = %d\n", c);
	c++;
	printf("In function incrementCount, after incrementing, c = %d\n\n", c);
}

