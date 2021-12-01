/*  Enumerated Type for Rock, Paper, Scissors */
/*  Program demonstrating the use of an enumerated type */

#include <stdio.h>

typedef enum {
	rock, paper, scissors
} rpsPlay_t;

//Alternate formatting:
//typedef enum
//{
//	rock,		// 0
//	paper,		// 1
//	scissors	// 2
//} rpsPlay_t;

int
main(void)
{
	rpsPlay_t playerPlay;
	    
	playerPlay = rock;
	printf("The value of the variable playerPlay is %d\n\n", playerPlay);
	
	if (playerPlay == paper)
		printf("This play is paper\n\n");
	else
		printf("This play is not paper\n\n");
		
	if (scissors == scissors)
		printf("These constants are the same\n\n");
		
	if (rock == scissors)
		printf("These constants are the same\n\n");
	else
		printf("These constants are not the same\n\n");
		
	playerPlay = 25;
	printf("The value of the variable playerPlay is %d\n\n", playerPlay);
	
	int someInteger = paper;
	printf("The value of the enum constant paper is %d\n\n", paper);
	printf("The value of someInteger is %d\n\n", someInteger);
	
	someInteger = paper + 1;
	printf("The value of someInteger is %d\n\n", someInteger);
	
	playerPlay = paper;
	printf("The value of the variable playerPlay is %d\n\n", playerPlay);
	
	//Cannot change the value of an enum constant (because it's ... constant.)
//	rock = 10;
	
	//But can create a local variable with same name:
	int rock = 10;
	playerPlay = rock;
	printf("The value of the variable playerPlay is %d\n\n", playerPlay);
	
	return(0);
}
