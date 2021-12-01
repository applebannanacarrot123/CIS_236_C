// Fig. 10.18: fig10_18.c
// Using an enumeration
#include <stdio.h>

// enumeration constants represent months of the year
// JAN=0, FEB=1, etc.

typedef enum {
	JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
} month_t;

int main(void)
{ 
	month_t month;
	
	// declare and initialize a list of strings
	const char *monthName[] = { "January", "February", "March", 
								"April", "May", "June", 
								"July", "August", "September", 
								"October", "November", "December" };

	// loop through month array & print, using enum constants for starting & ending LCV values
	for (month = JAN; month <= DEC; ++month) 
		printf("%-4d%-11s\n", month + 1, monthName[month]);
 
} 



/**************************************************************************
 * (C) Copyright 1992-2015 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
