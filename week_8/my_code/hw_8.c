// David Kovalev
// Homework week 8
// Computes internet charges given by user according to a rate schedule 

#include <stdio.h>


int main(){
	// Function Prototypes
	void getData(int *, int *);
	double computeCharges(int);
	void printAccountInfo(int, int, double);
	
	// Account variables
	int acc_num;
	int gb;
	double charges;
	
	// Get account number & gb used
	getData(&acc_num, &gb);
	
	// Get charges
	charges = computeCharges(gb);
	
	// Print account info
	printAccountInfo(acc_num, gb, charges);

	return 0;
}


// Prompts user account number and GB used and returns to input parameters
void getData(int *a_n, int *gb_used){
	int temp_a_n;
	int temp_gb;
	
	printf("Enter account number: ");
	scanf("%d", &temp_a_n);
	
	printf("Enter GB used: ");
	scanf("%d", &temp_gb);
	
	*a_n =  temp_a_n;
	*gb_used = temp_gb;
}


// Computes charges for transaction
double computeCharges(int gb){
	double costs = 0;
	
	// Charge brackets & rates

	// Charges above 120 GB
	if(gb > 120){
		// Amount above 120 at rate 0.04
		double c = ((double)(gb) - 120.00) * 0.04;
		costs += c;
		
		// Reduce gb to 120
		gb = 120;
	}
	
	if(gb > 80){ // Implied <= 120
		// Amount above 80 at rate 0.05
		double c = ((double)(gb) - 80.00) * 0.05;
		costs += c;
		
		// Reduce gb to 80
		gb = 80;
	}
	
	if(gb > 50){ // Implied <= 80
		// Amount above 50 at rate 0.07
		double c = ((double)(gb) - 50.00) * 0.07;
		costs += c;		
		
		// Reduce gb to 50;
		gb = 50;
	}
	
	if(gb > 0){ // Implied <= 50
		// Amount a bove 0 at rate 0.08
		double c = ((double)(gb)) * 0.08;
		costs += c;
	}
	
	return costs;
}


// Pretty print the output
void printAccountInfo(int an, int gb, double c){
	printf("\nTransaction Information:\n");
	printf("Account Number:%10d\n", an);
	printf("GB Used:%17d\n", gb);
	printf("Charges:%17.2f\n", c);
}

