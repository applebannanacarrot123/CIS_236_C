#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef  struct  {
	char name[20];
	int	level;
	int	health;
	int	number;
} player_t;

void printPlayer(player_t *);
void getPlayer(player_t *);

int
main (void)
{
	player_t 	playerInfo;
	getPlayer(&playerInfo);
	printPlayer(&playerInfo);
	
	return(0);
}

void
getPlayer(player_t * player)
{
	printf("Player number: ");
	scanf("%d", &(*player).number);

	printf("Player name: ");
	scanf("%s", player->name);
	
	printf("Player level: ");
	scanf("%d", &player->level);

	printf("Player health: ");
	scanf("%d", &player->health);
}

// The parameter player will get the address of the player structure
// passed to the function.
void
printPlayer(player_t * player) {
	printf("\nPlayer %d\n", player->number);
	printf("Name: %s\n", player->name);
	printf("Level: %d\n", player->level);
	printf("Health: %d\n", player->health);
}


