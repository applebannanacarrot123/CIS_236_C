#include <stdio.h>
//Examples using non-constant pointers to constant data

int main (void)
{
	//data is read-only
	const int constantData = 10;
	int otherData = 50;
	
	const int * nonConstantPtr = &constantData;
	//nonConstantPtr = &constantData;
	
	puts("At the beginning:\n");
	printf("%-10s%-20s%-20s%-10s\n", "Access","Variable name","Pointer name", "Data");
	printf("%-10s%-20s%-20s%-10s\n","======","=============","============", "====");
	printf("%-10s%-20s%-20s%d\n","Direct","constantData"," ", constantData);
	printf("%-10s%-20s%-20s%d\n","Direct","otherData"," ", otherData);
	printf("%-10s%-20s%-20s%d\n\n","Indirect","constantData","nonConstantPtr", *nonConstantPtr);

	//Attempt to change value of data directly (does not compile):
	//constantData = 1000;
	
	//Attempt to change value of data indirectly (does not compile):
	//*nonConstantPtr = 1000;
	
	//Change the value of the pointer
	nonConstantPtr = &otherData;
	
	puts("\nValue of data changed indirectly, and pointer changed to point at otherData:\n");
	printf("%-10s%-20s%-20s%-10s\n", "Access","Variable name","Pointer name", "Data");
	printf("%-10s%-20s%-20s%-10s\n","======","=============","============", "====");
	printf("%-10s%-20s%-20s%d\n","Direct","constantData"," ", constantData);
	printf("%-10s%-20s%-20s%d\n","Direct","otherData"," ", otherData);
	printf("%-10s%-20s%-20s%d\n\n","Indirect","otherData","nonConstantPtr", *nonConstantPtr);

}
