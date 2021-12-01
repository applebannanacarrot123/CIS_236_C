// Fig. 4.7: fig04_07_simplified.c
// Displaying message after entering letter grades with switch
#include <stdio.h>

int main(void)
{
	printf("Enter a letter grade: " );
	
	int grade; // one grade 
	
	scanf("%c", &grade);
	
	// determine which grade was input
	switch (grade) { // switch nested in while
	
		case 'A': // grade was uppercase A
		case 'a': // or lowercase a
			printf("Excellent!"); 
			break; // necessary to exit switch
		
		case 'B': // grade was uppercase B
		case 'b': // or lowercase b
			printf("Nice!");
			break;
		
		case 'C': // grade was uppercase C
		case 'c': // or lowercase c
			printf("Pretty good"); 
			break;
		
		case 'D': // grade was uppercase D
		case 'd': // or lowercase d
			printf("Fair"); 
			break;
		
		case 'F': // grade was uppercase F
		case 'f': // or lowercase f
			printf("Could be better");
			break; 

//         case '\n': // ignore newlines,
//         case '\t': // tabs,
//         case ' ': // and spaces in input
//            break; 
		
		default: // catch all other characters
			printf("Incorrect letter grade entered."); 
			break; // optional; will exit switch anyway
			
	} //end of switch

} //end of main


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

