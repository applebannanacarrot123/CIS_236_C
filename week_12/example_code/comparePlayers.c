//Compares two structures by comparnig each component in a function

#include <string.h>
#include <stdio.h>

typedef  struct  {
	char name[20];
	int	level;
	int	health;
	int	number;
} player_t;

	
void printPlayer(player_t);
player_t getPlayer(void);
int comparePlayers(player_t, player_t);

int
main (void) {
	
	//Create two player structure variables
	player_t player_1 = getPlayer();
	puts(" ");
	player_t player_2 = getPlayer();
	puts(" ");
	
	//Call the comparePlayers function, and save the return
	//value as an int
	int players_equal = comparePlayers(player_1, player_2);
	
	// Check value of return value
	if (players_equal)
		puts("These players are the same\n");
	else
		puts("These players are different\n");
	
	return(0);
}


/*
 * Determines whether or not the components of player_1 and player_2 match
 */
int
comparePlayers(player_t player_1, player_t player_2)
{
	//Uses a logical compound condition to compare each component
	//All comparisons must be true for the players to be equal
	return (strcmp(player_1.name, player_2.name) == 0	&&
			player_1.level == player_2.level			&&
			player_1.health == player_2.health			&&
			player_1.number == player_2.number);
}


player_t 
getPlayer(void) {
	
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

void
printPlayer(player_t player) {
	printf("\nPlayer %d\n", player.number);
	printf("Name: %s\n", player.name);
	printf("Level: %d\n", player.level);
	printf("Health: %d\n", player.health);
}
