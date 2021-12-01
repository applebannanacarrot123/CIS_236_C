#include <stdio.h>
//Examples using const pointers

int main (void)
{
	//data is writeable
	int nonConstantData = 10;
	
	//read-only pointer assigned to writeable data
	//Declaration is read from right to left as "constantPtr is a constant pointer to a non-constant integer"
	int * const constantPtr = &nonConstantData;
	
	//Assigning a value to a read-only variable is not allowed after the declaration statement:
	//constantPtr = &nonConstantData;
	
	puts("At the beginning:\n");
	printf("%-10s%-20s%-20s%-10s\n", "Access","Variable name","Pointer name", "Data");
	printf("%-10s%-20s%-20s%-10s\n","======","=============","============", "====");
	printf("%-10s%-20s%-20s%d\n","Direct","nonConstantData"," ", nonConstantData);
	printf("%-10s%-20s%-20s%d\n\n","Indirect","nonConstantData","constantPtr", *constantPtr);
	
	//Change the data directly
	nonConstantData = 50;
	
	puts("\nData changed via direct access:\n");
	printf("%-10s%-20s%-20s%-10s\n", "Access","Variable name","Pointer name", "Data");
	printf("%-10s%-20s%-20s%-10s\n","======","=============","============", "====");
	printf("%-10s%-20s%-20s%d\n","Direct","nonConstantData"," ", nonConstantData);
	printf("%-10s%-20s%-20s%d\n\n","Indirect","nonConstantData","constantPtr", *constantPtr);

	//Change the data indirectly, by using the same pointer
	*constantPtr = 100;
	
	puts("\nData changed via indirect access using same pointer:\n");
	printf("%-10s%-20s%-20s%-10s\n", "Access","Variable name","Pointer name", "Data");
	printf("%-10s%-20s%-20s%-10s\n","======","=============","============", "====");
	printf("%-10s%-20s%-20s%d\n","Direct","nonConstantData"," ", nonConstantData);
	printf("%-10s%-20s%-20s%d\n\n","Indirect","nonConstantData","constantPtr", *constantPtr);

	//Change the data indirectly, by using a different pointer
	int * otherPointer = &nonConstantData;
	*otherPointer = 200;
	
	puts("\nData changed via indirect access using a different pointer:\n");
	printf("%-10s%-20s%-20s%-10s\n", "Access","Variable name","Pointer name", "Data");
	printf("%-10s%-20s%-20s%-10s\n","======","=============","============", "====");
	printf("%-10s%-20s%-20s%d\n","Direct","nonConstantData"," ", nonConstantData);
	printf("%-10s%-20s%-20s%d\n\n","Indirect","nonConstantData","otherPointer", *otherPointer);


	//Create new data & attempt to point existing constant pointer to it
	int theOtherData = 25;
	
	//Assigning a value to a read-only variable is not allowed after the declaration statement:
	//constantPtr = &theOtherData;

}

