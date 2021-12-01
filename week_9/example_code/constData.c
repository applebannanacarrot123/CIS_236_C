#include <stdio.h>
//Examples using const data

int main (void)
{
	//data is writeable
	int writeableData = 10;
	
	//data is constant (read-only)
	const int readOnlyData = 25;
	
	printf("Non-constant data value is %d\n", writeableData);
	printf("Constant data value is %d\n\n", readOnlyData);
	
	//non-constant data can be changed
	writeableData = 100;
	
	//Assigning a value to a read-only variable is not allowed after the declaration statement:
//	readOnlyData = 250;

	puts("After update:");
	printf("Non-constant data value is %d\n", writeableData);
	printf("Constant data value is %d\n\n", readOnlyData);

}
