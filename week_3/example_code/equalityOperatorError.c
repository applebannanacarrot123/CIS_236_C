#include <stdio.h>

int main(void)
{
	int x;
	
	printf("Enter an integer value other than 1: ");
	scanf("%d", &x);
	
	printf("\n");
	
	if (x == 1)
		printf("You entered a one. Please try again.\n");
	else
		printf("The number you entered is %d\n", x);
	
}
