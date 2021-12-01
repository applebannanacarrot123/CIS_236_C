#include <stdio.h>
//Examples using const pointers

int main (void)
{
	//Data is read-only
	const int constantData = 20;
	
	//Declaration is read from right to left as "constantPtr is a constant pointer to a constant integer"
	const int * const constantPtr = &constantData;
	
	printf("Via direct access, the data is %d\n", constantData);
	printf("Via indirect access, the data is %d\n\n", *constantPtr);
	
	//Cannot change the data via direct access
//	constantData = 50;
	
	//Cannot change the data via indirect access
//	*constantPtr = 50;
	
	//Cannot change the pointer
	int otherData;
//	constantPtr = &otherData;

}

