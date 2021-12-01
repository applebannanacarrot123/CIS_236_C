// David Kovalev
// Week 4 homework
// Program that prompts the user for stock prices and counts the number of high, average and low priced stocks


#include <stdio.h>
#define SENTINEL -99 // sentinel control for the loop


int main(){
	// Initialize variables
	float total_prices = 0;
	int total_stocks = 0;
	int high_priced = 0;
	int avg_priced = 0;
	int low_priced = 0;
	int current_stock = 0;
	
	
	int scanf_return; // Make sure scanf input is a valid integer
	
	// First ask outside of loop incase -99 is first response
	printf("Enter the price (-99 to stop): ");
	scanf_return = scanf("%d", &current_stock);
	
	// Loop for user input and calculations
	while((current_stock != SENTINEL) && (scanf_return == 1)){
		// Determine stock price category
		if(85 <= current_stock){
			high_priced += 1;
		}
		else if((60 <= current_stock) && (current_stock <= 84)){
			avg_priced += 1;
		}
		else{
			low_priced += 1;
		}
	
		// Increment counter of and sum of stock prices
		total_stocks += 1;
		total_prices += current_stock;
		
		// Ask user for input
		printf("Enter the price (-99 to stop): ");
		scanf_return = scanf("%d", &current_stock);
	}
	
	// Output
	printf("\nNumber of high prices is %d.\n", high_priced);
	printf("Number of average prices is %d.\n", avg_priced);
	printf("Number of low prices is %d.\n", low_priced);
	
	// Avg = total_prices / total_stocks
	
	printf("Average price is %.2f\n", total_prices / total_stocks);
	
	return 0;
}
