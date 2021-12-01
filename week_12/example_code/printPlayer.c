//Function with a structure input parameter

#include <string.h>
#include <stdio.h>

// Player structure definition
typedef struct  {
	char name[20];
	int	level;
	int	health;
	int	number;
} player_t;


void printPlayer(player_t);

int
main (void) {
	
	// Declare variable of type player_t
	player_t player;
	
	// Prompt user for each component
	printf("Player number: ");
	scanf("%d", &player.number);
	
	printf("Player name: ");
	scanf("%s", player.name);
	
	printf("Player level: ");
	scanf("%d", &player.level);
	
	printf("Player health: ");
	scanf("%d", &player.health);
	
	// Pass the player structure by value to the printPlayer function
	printPlayer(player);
	
	return(0);
}


// The parameter player will get a copy of the player structure
// passed to the function.
void
printPlayer(player_t player) {
	printf("\nPlayer %d\n", player.number);
	printf("Name: %s\n", player.name);
	printf("Level: %d\n", player.level);
	printf("Health: %d\n", player.health);
}






