#include <stdio.h>

void incrementCountOutput(int *count);

int
main(void)
{
	int count = 10;
	
	printf("In main, before calling function incrementCountOutput, count = %d\n\n", count);
	incrementCountOutput(&count);
	printf("In main, after calling function incrementCountOutput, count = %d\n", count);

	return (0);
	
}

void
incrementCountOutput(int *c)
{
	printf("In function incrementCountOutput, before incrementing, c = %d\n", *c);
	(*c)++;
	printf("In function incrementCountOutput, after incrementing, c = %d\n\n", *c);
}
