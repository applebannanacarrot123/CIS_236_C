// David Kovalev
// Homework program 2

/*
This program receives a radius and ouputs its area and circumference to 2 decimal places
*/

#include <stdio.h>

int main (void){
	// Variable initialization
	unsigned int radius;
	double circumference;
	double area;
	double pi = 3.14;
	
	// Input
	printf("Enter the value for radius in inches: ");
	scanf("%d", &radius);
	
	// Algorithm
	circumference = 2 * pi * radius;
	area = pi * radius * radius;
	
	// Output
	printf("The area of a circle with radius %d is: %.2f", radius, area);
	printf("\nThe circumference of a circle with radius %d is: %.2f \n", radius, circumference);
	
	system("pause");
	
	return 0;
}
