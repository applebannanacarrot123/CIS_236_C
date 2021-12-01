// Fig. 6.4: fig06_04_rewritten.c
// Examples of initializing the elements of an array with an initializer list.
#include <stdio.h>
void printArray(int[]);

// function main begins program execution
int main(void)
{
	// Example 1 - number of initializers matches size - this is fine.      
	int array1[5] = {18, 19, 20, 21, 22};
	printf("Array 1\n");
	printArray(array1);
	
	// Example 2 - number of initializers is less than size - this is fine.    
	// 			The remaining elements initialized to zero
	int array2[5] = {18};
	printf("Array 2\n");
	printArray(array2);	
	
	// Example 3 - number of initializers is less than size - this is fine.    
	// 			The remaining elements initialized to zero.
	//			Take adavanatge f this to initialzie entire array without a loop.
	int array3[5] = {0};
	printf("Array 3\n");
	printArray(array3);	
	
	// Example 4 - number of initializers is more than size - this is an error,
	//			and may have unintended consequences when program executes.
	int array4[5] = {18, 19, 20, 21, 22, 23};
	printf("Array 4\n");
	printArray(array4);	
}


void printArray(int arrayToPrint[]) {
	printf("%s%13s\n", "Element", "Value");
	
	// output contents of array in tabular format
	for (size_t i = 0; i < 5; ++i) {
		printf("%7u%13d\n", i, arrayToPrint[i]);
	} 
	printf("\n\n");	
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
