/* Program to Monitor Experience Points Inventory */


#include <stdio.h>


int
main(void)
{
        int exp_pts;
        int minimum;
        int quest;
                                
        printf("Starting experience points> ");
        scanf("%d", &exp_pts);

        printf("Quest points> ");
        scanf("%d", &quest);

        while (exp_pts > quest)
        {
        	exp_pts -= quest;
        	printf("You have %d experience points left\n", exp_pts);
        	
			printf("Quest points> ");
        	scanf("%d", &quest);
		}
		
		printf("\n");
		
		printf("Current experience points: %d ",exp_pts);
		
}

