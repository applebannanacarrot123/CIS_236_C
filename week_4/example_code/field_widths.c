/* Figure 5.8  Displaying a Celsius-to-Fahrenheit Conversion Table */
/* Conversion of Celsius to Fahrenheit temperatures */

#include <stdio.h>

int
main(void)
{
      /* Variable declarations */
      int    celsius;
      double fahrenheit;

      /* Display the table heading */
      printf("   Celsius    Fahrenheit\n");

      /* Display the table */
      for  (celsius = 10; celsius >= -5; celsius -= 5) 
	  {  //can this be written another way?
          fahrenheit = 1.8 * celsius + 32.0;
          printf("%6c%3d%8c%7.2f\n", ' ', celsius, ' ', fahrenheit);
      }

      return (0);
}

/*
   Celsius    Fahrenheit
       10          50.00
        5          41.00
        0          32.00
       -5          23.00
*/

