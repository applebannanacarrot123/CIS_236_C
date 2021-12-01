#include <stdio.h> 

int main(void)
{
	int local_variable = 25;
	
	printf("The value of local_variable in main before the if block is %d\n", local_variable);
	
	if (local_variable > 20)
	{
		int variableInIfStatement = 100;
		printf("The value of variableInIfStatement in the if block is %d\n", variableInIfStatement);
	}
	
	printf("The value of variableInIfStatement in main after the if block is %d\n", variableInIfStatement);
	
	printf("The value of local_variable in main after the if block is %d\n", local_variable);
	
}

