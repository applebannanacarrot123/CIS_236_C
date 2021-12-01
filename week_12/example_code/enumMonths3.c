// Fig. 10.18: fig10_18.c
// Using an enumeration
#include <stdio.h>

// enumeration constants represent months of the year
// JAN=1, FEB=2, etc.

// Version 3 - does not use typedef keyword. The keyword enum
// must be used anytime the type months is used.
enum months {                                                    
   JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

int main(void)
{ 
	// initialize array of pointers
   	const char *monthName[] = { "", "January", "February", "March", 
								"April", "May", "June", 
								"July", "August", "September", 
								"October", "November", "December" };
	
	// loop through month array & print, using enum constants for starting & ending LCV values
	// Note that month is a variable of type months, which is an enumerated type.
	for (enum months month = JAN; month <= DEC; ++month) 
		printf("%-4d%-11s\n", month, monthName[month]);
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
