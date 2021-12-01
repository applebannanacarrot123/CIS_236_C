/* String Input/Output with scanf and printf */
#include <stdio.h>
#include <string.h>

#define STRING_LEN  10

int
main(void)
{
	char color[] = "blue"; 
	const char *colorPtr = "blue"; 
	
	printf("color = %s\n", color);
	printf("colorPtr = %s\n\n", colorPtr);
	
	strcpy(color,"red");
	colorPtr = "green";
	
	printf("color = %s\n", color);
	printf("colorPtr = %s\n\n", colorPtr);
	
	colorPtr = color;
	printf("colorPtr = %s\n\n", colorPtr);
	
	//colorPtr[0]	= 'x';
	//*colorPtr = *color;
	
	return (0);
}
