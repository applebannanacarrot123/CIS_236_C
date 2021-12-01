/* Figure 5.10  Sentinel-Controlled while Loop */
/* Compute the sum of a list of exam scores. */

#include <stdio.h>

#define SENTINEL -99

int
main(void)
{
        int sum = 0,   /* output - sum of scores input so far	*/
            score;     /* input - current score	*/

        /* Accumulate sum of all scores.	*/
        printf("Enter first score (or %d to quit)> ", SENTINEL);
        int ret, score2;
		ret = scanf("%d", &score);       /* Get first score.	*/
		printf("Return value from scanf is %d\n", ret);
		
        while ((score != SENTINEL) && (ret == 1)) {
            sum += score;
            
            printf("Enter next score (%d to quit)> ", SENTINEL);
            ret = scanf("%d", &score);   /* Get next score.	*/
        	
		}
        

        
        printf("\nSum of exam scores is %d\n", sum);

        return (0);
}

