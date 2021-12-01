// 8) Executing from file explorer makes the program close instantly after i type in a number and hit enter
// 9) Executing from cmd tells me what the conversion was and returns back to the folder i was in
// 10) Executing from file explorer aftering adding system("pause") lets me see what the conversion is. It also prints out "Press any key to continue" after the conversion

// This program prompts the user for a temperature in
// Fahrenheit and displays the result to the screen.


/*
This program prompts the user for a temperature in
Fahrenheit, converts the temperature to Celsius, and
displays the result to the screen.
*/

#include <stdio.h>

// main function required by at L C programs 
int main (void)
{
	// Variable declarations 
	double tempInFahrenheit; 
	double tempInCelsius; 

	// Displays a prompt so the user knows what to do 
	printf("Enter the temperature in Fahrenheit: ");
	// Reads the number typed by the user, and saves it into 
	// the variable tempInFahrenheit 
	scanf("%lf", &tempInFahrenheit);
	 
	// Computes the temperature in Celsius 
	tempInCelsius = (tempInFahrenheit - 32) / 1.8;
	
	// (T(F) - 32) / 1.8 // conversion formula for reference 
	
	// Displays the temperature in Celsius
	printf("%.2f F converts to %.2f degrees C", tempInFahrenheit, tempInCelsius);
	
	
	system("pause");
	// ALL C programs need this at the end Of main 
	return (0); 
}

