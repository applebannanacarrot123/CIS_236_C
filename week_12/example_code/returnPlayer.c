//Function with a structure return value

#include <string.h>
#include <stdio.h>

// Player structure definition
typedef  struct  {
	char name[20];
	int	level;
	int	health;
	int	number;
} player_t;

	
void printPlayer(player_t);
player_t getPlayer(void);

int
main (void) {
	//Declare player variable and assign it the return value
	//from the getPlayer function.
	player_t player = getPlayer();
	
	// Pass the player structure by value to the printPlayer function
	printPlayer(player);
	
	return(0);
}

//The return value is the player variable's data type.
player_t 
getPlayer(void)
{
	player_t player;
	
	printf("Player number: ");
	scanf("%d", &player.number);

	printf("Player name: ");
	scanf("%s", player.name);
	
	printf("Player level: ");
	scanf("%d", &player.level);

	printf("Player health: ");
	scanf("%d", &player.health);
	
	return player;
}

// The parameter player will get a copy of the player structure
// passed to the function.
void
printPlayer(player_t player) /* input - one player structure */
{
      printf("\nPlayer %d\n", player.number);
      printf("Name: %s\n", player.name);
      printf("Level: %d\n", player.level);
      printf("Health: %d\n", player.health);
}
