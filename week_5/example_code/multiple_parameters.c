#include <stdio.h> 

double multiply(int y, double z);

int main(void)
{
	int theInteger;
	double theDouble;
	double result;
	
	puts("Type an integer: ");
	scanf("%d", &theInteger);
	
	puts("Type a double: ");
	scanf("%lf", &theDouble);

	result = multiply(theInteger, theDouble);
	//result = multiply(theInteger, theInteger);
	//result = multiply(theDouble);
	
	printf("The result of %d * %.2f is %.2f\n", theInteger, theDouble, result); 	
}

double multiply(int y, double z)
{
	double result;
	result = y * z;
	return result;             
}

//Sample data:
// 5 * 6.1 = 30.50
// 


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

