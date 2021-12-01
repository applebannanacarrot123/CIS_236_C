#include <stdio.h>

int
main (void)
{
	for (int i=0; i<5; i++)
	{
		printf("The value of i within the loop is %d\n",i);
	}
	
	printf("The value of i outside the loop is %d\n",i);
}
