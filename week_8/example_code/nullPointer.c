//This code demonstrates assigning NULL and 0 to a pointer variable.

#include <stdio.h>

int main(void)
{
	//Declare a pointer to int variable xPtr; assign it the value NULL
	int * xPtr = NULL;
	
	//Print the full address, using FCS %p
	printf("The address stored in the pointer xPtr is %p\n\n", xPtr); 
	
	//Print the address without the leading zeroes, using FCS %x
	//Note this may produce different results on different systems/platforms
	printf("The address without leading zeroes is %x\n\n\n", xPtr);
	
	//Declare a pointer to int variable xPtr2; assign it the value 0
	int * xPtr2 = 0;
	
	//Print the full address, using FCS %p
	printf("The address stored in the pointer xPtr2 is %p\n\n", xPtr2); 
	
	//Print the address without the leading zeroes, using FCS %x
	//Note this may produce different results on different systems/platforms
	printf("The address without leading zeroes is %x\n\n", xPtr2);
	
} 
