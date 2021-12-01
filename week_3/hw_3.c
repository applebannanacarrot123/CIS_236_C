// David Kovalev
// Homework #3
// A program that gives a nicely formatted receipt for a phone purchased at the jjc bookstore

#include <stdio.h>

int main(){
	float phone_price;
	char iphone;
	int applecare_years = 0;
	float applecare_price = 0;
	float subtotal = 0;
	float tax;
	float total_price;
	
	// Get phone price
	printf("Enter the price of the phone> ");
	scanf("%f", &phone_price);
	subtotal = phone_price;
	fflush(stdin);

	// Get iphone status
	printf("Is it an iPhone (Y/N)?> ");
	scanf("%c", &iphone);
	fflush(stdin);
	
	// Apple care
	if(iphone == 'Y' || iphone == 'y'){
		printf("Enter the number of years of AppleCare> ");
		scanf("%d", &applecare_years);
		fflush(stdin);
		
		applecare_price = 0.12 * phone_price;
		if(applecare_years > 1){
			applecare_price = applecare_years * (0.10 * phone_price);
		}
	}
	
	// Calculations
	subtotal = phone_price + applecare_price;
	tax = 0.05 * subtotal;
	total_price = subtotal + tax;
	
	// Output
	printf("\n");
	printf("%-30s%15c%7.2f\n", "Price of phone", '$',phone_price);
	
	// Applecare output
	if(applecare_years > 1){
		printf("%-30s%15c%7.2f\n", "AppleCare price (10%)", '$', applecare_price);
		printf("%-30s%15c%7.2f\n", "Subtotal", '$', subtotal);
	}
	else if(applecare_years == 1){
		printf("%-30s%15c%7.2f\n", "AppleCare price (12%)", '$', applecare_price);
		printf("%-30s%15c%7.2f\n", "Subtotal", '$', subtotal);
	}
	
	// Rest of output
	printf("%-30s%15c%7.2f\n", "Sales tax (5%)", '$', tax);
	printf("%-30s%15c%7.2f\n", "Total purchase", '$', total_price);
	
	return 0;
}
