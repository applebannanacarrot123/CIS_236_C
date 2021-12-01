// Demonstrating printing of names of enumeration constants

#include <stdio.h>
#include <string.h>

typedef enum {
	rock, paper, scissors, lizard, spock
} rpsPlay_t;

//Alternate formatting:
//typedef enum
//{
//	rock,		// 0
//	paper,		// 1
//	scissors'	// 2
//	lizard,		// 3
//	spock		// 4
//} rpsPlay_t;

void getEnumText(char [], rpsPlay_t);

int
main(void)
{
	rpsPlay_t rpsPlayer;
	char nameOfEnumConstant[10] = {'\0'};

	rpsPlayer = rock;
	getEnumText(nameOfEnumConstant, rpsPlayer);
	printf("RPSLS value %d represents %s\n\n", rpsPlayer, nameOfEnumConstant);
	
	rpsPlayer = 3;
	getEnumText(nameOfEnumConstant, rpsPlayer);
	printf("RPSLS value %d represents %s\n\n", rpsPlayer, nameOfEnumConstant);
	
	printf("Enter an integer from 0 to %d: ", spock);
	scanf("%d", &rpsPlayer);
	getEnumText(nameOfEnumConstant, rpsPlayer);
	printf("RPSLS value %d represents %s\n", rpsPlayer, nameOfEnumConstant);
	
	return(0);
}

// Determines string corresponding to a value of type rpsPlay_t
void
getEnumText(char nameOfEnumConstant[], rpsPlay_t rpsPlayer)
{
	//Cannot use a local variable in place of an enum constant
	//const int scissors = 0;

	switch (rpsPlayer) {
		
		case 0:				// can use an integer
			strcpy(nameOfEnumConstant, "rock");
			break;
		
		case paper:			//can use an enum constant
			strcpy(nameOfEnumConstant, "paper");
			break;
			
		case scissors:		
			strcpy(nameOfEnumConstant, "scissors");
			break;
			
		case lizard:
			strcpy(nameOfEnumConstant, "lizard");
			break;
		
		case spock:
			strcpy(nameOfEnumConstant, "spock");
			break;
			
		default:
			strcpy(nameOfEnumConstant, "invalid play");
	}
}

