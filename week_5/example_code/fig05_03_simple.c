// Fig. 5.3: fig05_03_simple.c
// Creating and using a programmer-defined function.
#include <stdio.h> 

int square(int y); // function prototype

int main(void)
{
	int num_to_square;
	int square_of_num;
	
	puts("Type an integer: ");
	scanf("%d", &num_to_square);
	
	square_of_num = square(num_to_square);
	
	printf("The square of %d is %d\n", num_to_square, square_of_num); 	
}

// square function definition returns the square of its parameter 
int square(int y) // y is a copy of the argument to the function
{
	int result;
	result = y * y;
	return result; // returns the square of y as an int              
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

