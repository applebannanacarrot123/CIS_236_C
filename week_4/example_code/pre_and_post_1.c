#include <stdio.h>

int
main(void)
{
	int a = 0;
	int	x = 0;
	int y = 0;
	
	a = 5; //Line 1 in example
	x = 2; //Line 2 in example
	
	printf("Before line 3:\n");
	printf("a = %d\n", a);
	printf("x = %d\n", x);
	printf("y = %d\n\n", y);
	
	y = x * a++; //Line 3 in example
	
	printf("After line 3:\n");
	printf("a = %d\n", a);
	printf("x = %d\n", x);
	printf("y = %d", y);
	
	return(0);
}
