#include <stdio.h>
//Examples using const pointers

int computeSum(int * nonConstantStartingPtr, int amountToAdd);
int computeSumConstantPointerParameter(int * const constantStartingPtr, int amountToAdd);

int main (void)
{
	int nonConstantData = 20;
	int sum = 0;
	
	//writeable pointer assigned to writeable data
	int * nonConstantPtr = &nonConstantData;			
	
	//read-only pointer assigned to writeable data
	//Declaration is read from right to left as "constantPtr is a constant pointer to a non-constant integer"
	int * const constantPtr = &nonConstantData;
	
	sum = computeSum(nonConstantPtr, 5);
	puts("Result of calling computeSum function with non-constant pointer");
	printf("sum of %d and 5 is %d\n\n", *nonConstantPtr, sum);
	
	sum = computeSum(constantPtr, 5);
	puts("Result of calling computeSum function with constant pointer");
	printf("sum of %d and 5 is %d\n\n", *constantPtr, sum);

	sum = computeSumConstantPointerParameter(nonConstantPtr, 5);
	puts("Result of calling computeSumConstantParameter function with non-constant pointer");
	printf("sum of %d and 5 is %d\n\n", *nonConstantPtr, sum);
	
	sum = computeSumConstantPointerParameter(constantPtr, 5);
	puts("Result of calling computeSumConstantParameter function with constant pointer");
	printf("sum of %d and 5 is %d\n\n", *constantPtr, sum);

}

int computeSum(int * nonConstantStartingPtr, int amountToAdd)
{
//	int newData = 1000;
//	nonConstantStartingPtr = &newData;
	int result = *nonConstantStartingPtr + amountToAdd;
	return result;
}


int computeSumConstantPointerParameter(int * const constantStartingPtr, int amountToAdd)
{
//	int newData = 1000;
//	constantStartingPtr = &newData;
	*constantStartingPtr = 1000;
	int result = *constantStartingPtr + amountToAdd;
	return result;
}

