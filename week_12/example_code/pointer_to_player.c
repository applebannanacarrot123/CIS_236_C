#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef  struct  {
	char name[20];
	int	level;
	int	health;
	int	number;
} player_t;


player_t getPlayer(void);

int
main (void)
{
	player_t 	playerInfo = getPlayer();
	player_t *	playerPtr;
	playerPtr =	&playerInfo;

	//How can we refer to a component using a pointer to
	//the structure?
	
	//Attempt 1 - use the pointer directly
	printf("\nPlayer number is %d\n", playerPtr.number);
	
	//Attempt 2 - try to dereference the pointer…
	//printf("%d", *playerPtr.number);

	//Attempt 3 - Force dereferencing of pointer first, using parentheses
	//printf("\nPlayer number is %d", (*playerPtr).number);
	
	//Attempt 4 - Force dereferencing of pointer first, using Structure Pointer Operator ->
	//printf("\nPlayer number is %d", playerPtr->number);
  	
	return(0);
}

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
