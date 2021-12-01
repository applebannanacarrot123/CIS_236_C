// Fig. 6.16: fig06_16.c
// Survey data analysis with arrays; 
// computing the mean, median and mode of the data.
#include <stdio.h>
#define SIZE 99

// function prototypes
void bubbleSort(unsigned int a[]);
void printArray(const unsigned int a[]);

// function main begins program execution
int main(void)
{
  
   // very unsorted array
//   unsigned int response[SIZE] =             
//      {6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
//       7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
//       6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
//       7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
//       6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
//       7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
//       5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
//       7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
//       7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
//       4, 5, 6, 1, 6, 5, 7, 8, 7};
   
   //almost sorted array
    unsigned int response[SIZE] =             
      {10, 9, 8, 7, 6, 5, 4, 3, 2, 1,
		11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
		21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
		31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
		41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
		51, 52, 53, 54, 55, 56, 57, 58, 59, 60,
		61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
		71, 72, 73, 74, 75, 76, 77, 78, 79, 80,
		81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
		91, 92, 93, 94, 95, 96, 97, 98, 99, 100};    
       

   printf("Unsorted array:\n\n");

   printArray(response); // output unsorted array

	printf("\n\n");

   bubbleSort(response); // sort array

   printf("Sorted array:\n\n");
   printArray(response); // output sorted array
}


// function that sorts an array with bubble sort algorithm
void bubbleSort(unsigned int a[])
{
	int swap = 1;
	
   // loop to control number of passes
   for (unsigned int pass = 1; pass < SIZE; ++pass) 
   {
		if (!swap) {
			printf("Exiting early!\n");
			break;
		}
		
	
		swap = 0; //94 passes
		
      // loop to control number of comparisons per pass
      for (size_t j = 0; j < SIZE - 1; ++j) 
	  {
			
		
         // swap elements if out of order
         if (a[j] > a[j + 1]) 
		 {
            unsigned int hold = a[j];
            a[j] = a[j + 1];
            a[j + 1] = hold;
            swap = 1;
         } 
      } 
      printf("Pass # %u competed\n",pass);  //94 passes with swap flag, 98 without
   } 
} 

// output array contents (20 values per row)
void printArray(const unsigned int a[])
{
   // output array contents
   for (size_t j = 0; j < SIZE; ++j) 
   {

      if (j % 20 == 0)  // begin new line every 20 values
      {
         puts("");
      } 

      printf("%3u", a[j]);
   } 
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

