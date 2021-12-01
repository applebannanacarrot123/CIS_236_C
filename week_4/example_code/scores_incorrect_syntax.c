/* Figure 5.10  Sentinel-Controlled while Loop */
/* Compute the sum of a list of exam scores. */

#include <stdio.h>

#define SENTINEL -99

int
main(void)
{
	int sum = 0;   /* output - sum of scores input so far	*/
	int score;     /* input - current score	*/
	
	while (score != SENTINEL)
	{
		printf("Enter next score (%d to quit)> ", SENTINEL);
		scanf("%d", &score);
		sum += score;
	}
	
	printf("\nSum of exam scores is %d\n", sum);
	
	return (0);
}

