#include <stdio.h>

int
main(void)
{
	int a = 5;
	int	x = 2;
	int y = 0;
	
	printf("Before line 3:\n");
	printf("a = %d\n", a);
	printf("x = %d\n", x);
	printf("y = %d\n\n", y);
		
	y = x * ++i;
	
	printf("After line 3:\n");
	printf("a = %d\n", a);
	printf("x = %d\n", x);
	printf("y = %d", y);
	
	return(0);
}
