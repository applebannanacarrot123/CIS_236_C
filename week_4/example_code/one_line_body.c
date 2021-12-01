#include <stdio.h>

int main(void)
{
	int loop_count;
	
	for (loop_count = 0; loop_count < 3; loop_count += 1)
	{
		printf("Value of loop count variable is %d\n", loop_count);
	}

	return(0);
}
