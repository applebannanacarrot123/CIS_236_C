#include <stdio.h>
//Examples using non-constant pointers to non-constant data

int main (void)
{
	//data is writeable
	int nonConstantData = 10;
	int otherData = 50;
	
	//pointer is declared without const, so the pointer itself is also writeable
	int * nonConstantPtr = &nonConstantData;
	
	puts("At the beginning:\n");
	printf("%-10s%-20s%-20s%-10s\n", "Access","Variable name","Pointer name", "Data");
	printf("%-10s%-20s%-20s%-10s\n","======","=============","============", "====");
	printf("%-10s%-20s%-20s%d\n","Direct","nonConstantData"," ", nonConstantData);
	printf("%-10s%-20s%-20s%d\n","Direct","otherData"," ", otherData);
	printf("%-10s%-20s%-20s%d\n\n","Indirect","nonConstantData","nonConstantPtr", *nonConstantPtr);

	//Change the value of the pointer to point at a different variable
	nonConstantPtr = &otherData;
	
	puts("\nPointer changed to point at otherData:\n");
	printf("%-10s%-20s%-20s%-10s\n", "Access","Variable name","Pointer name", "Data");
	printf("%-10s%-20s%-20s%-10s\n","======","=============","============", "====");
	printf("%-10s%-20s%-20s%d\n","Direct","nonConstantData"," ", nonConstantData);
	printf("%-10s%-20s%-20s%d\n","Direct","otherData"," ", otherData);
	printf("%-10s%-20s%-20s%d\n\n","Indirect","otherData","nonConstantPtr", *nonConstantPtr);

	//Change the value of nonConstantData directly
	nonConstantData = 80; //direct
	//Change the value of otherData indirectly
	*nonConstantPtr = 75; //indirect
	
	puts("\nValue of nonConstantData changed directly, and value of otherData changed via indirection:\n");
	printf("%-10s%-20s%-20s%-10s\n", "Access","Variable name","Pointer name", "Data");
	printf("%-10s%-20s%-20s%-10s\n","======","=============","============", "====");
	printf("%-10s%-20s%-20s%d\n","Direct","nonConstantData"," ", nonConstantData);
	printf("%-10s%-20s%-20s%d\n","Direct","otherData"," ", otherData);
	printf("%-10s%-20s%-20s%d\n\n","Indirect","nonConstantData","nonConstantPtr", *nonConstantPtr);
	
}
