#include <stdio.h> 

int main(void)
{
	int local_variable = 25;
	
	printf("The value of local_variable in main before the if block is %d\n", local_variable);
	
	if (local_variable > 20)
	{
		int local_variable = 100; // this one hides the earlier one
		printf("The value of local_variable in the if block is %d\n", local_variable);
	}
	
	printf("The value of local_variable in main after the if block is %d\n", local_variable);
	
}

