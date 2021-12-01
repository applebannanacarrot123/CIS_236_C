// David Kovalev
// Homework #5
// A program that uses functions to give a nicely formatted receipt for a phone purchased at the jjc bookstore

#include <stdio.h>

// Function prototypes
double computeAppleCareCharges(int years, double phone_price);
double computeAppleSubtotal(double ac_charges, double phone_price);
double computeTax(double subtotal);
double computeTotalCharges(double subtotal, double tax);


int main(){
	// Initalize variables
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
		
		// Apple calculations
		applecare_price = computeAppleCareCharges(applecare_years, phone_price);
		subtotal = computeAppleSubtotal(applecare_price, phone_price);
		tax = computeTax(subtotal);
		total_price = computeTotalCharges(subtotal, tax);
	}
	
	else{
		// Calculations
		subtotal = phone_price;
		tax = computeTax(phone_price);
		total_price = computeTotalCharges(phone_price, tax);
	}
	
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


double computeAppleCareCharges(int years, double phone_price){
	// Compute charges for apple care if phone is iPhone

	if(years > 1){
		return (phone_price * 0.10) * years;
	}
	else{
		return (phone_price * 0.12);
	}
}


double computeAppleSubtotal(double ac_charges, double phone_price){
	// Compute subtotal if phone is an iPhone
	
	return ac_charges + phone_price;
}


double computeTax(double subtotal){
	// Computes tax on subtotal @ 5%
	return 0.05 * subtotal;
}


double computeTotalCharges(double subtotal, double tax){
	// Computes total charges regardless if iPhone or not
	
	return subtotal + tax;
}
