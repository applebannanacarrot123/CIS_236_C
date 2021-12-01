#include <stdio.h>
//Examples using const data parameters

int computeSumWriteableDataParameter(int, int);
int computeSumConstantDataParameter(const int, int);

int main (void)
{
	//data is writeable
	int nonConstantData = 10;
	
	//For storing result of function
	int sum = 0;
	
	//function call
	sum = computeSumWriteableDataParameter(nonConstantData, 5);
	puts("Result of calling computeSumWriteableDataParameter function");
	printf("Sum of %d and 5 is %d\n\n", nonConstantData, sum);
	
	//function call
	sum = computeSumConstantDataParameter(nonConstantData, 5);
	puts("Result of calling computeSumConstantParameter function");
	printf("Sum of %d and 5 is %d\n\n", nonConstantData, sum);
	
}

int computeSumWriteableDataParameter(int writeableData, int amountToAdd)
{
	writeableData = 100;
	int result = writeableData + amountToAdd;
	return result;
}

int computeSumConstantDataParameter(const int constantData, int amountToAdd)
{
	//constantData = 100;
	int result = constantData + amountToAdd;
	return result;
}
