#include <stdio.h>

int main(void)
{
	int x;
	int y;
	
	printf("Value of x: ");
	scanf ("%d", &x);
	
	printf("Value of y: ");
	scanf ("%d", &y);

	if (x > y)	
	{
		//To swap two values, need a third temporary variable
		int temp;
		temp = x;
		x = y;
		y = temp;
	}
	
	printf("Value of x = %d\n", x);
	printf("Value of y = %d\n", y);
	
	
}
