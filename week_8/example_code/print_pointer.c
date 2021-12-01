//This code demonstrates printing the value of a pointer variable.

#include <stdio.h>

int main(void)
{
	//Declare int variable x
	int x = 10;
	
	//Declare pointer to int variable xPtr; assign it the address of x
	int * xPtr = &x;
	
	//Print the full address, using FCS %p
	printf("The address of the variable x is %p\n\n", xPtr); 
	
	//Print the address without the leading zeroes, using FCS %x
	//Note this may produce different results on different systems/platforms
	printf("The address without leading zeroes is %x\n", xPtr);
	
} 
