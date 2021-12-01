// Demonstrates an array of structures
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef  struct  {
	char name[20];
	int	level;
	int	health;
	int	number;
} player_t;


int
main (void) {
	
	player_t player_list[3];
	
	for (int i=0; i<3; i++) {
		printf("Player number: ");
		scanf("%d", &player_list[i].number);
		
		printf("Player name: ");
		scanf("%s", player_list[i].name);
		
		printf("Player level: ");
		scanf("%d", &player_list[i].level);
		
		printf("Player health: ");
		scanf("%d", &player_list[i].health);
		
		puts("");
	}

			
	for (int i=0; i<3; i++)
	{
		printf("\nPlayer %d\n", player_list[i].number);
		printf("Name: %s\n", player_list[i].name);
		printf("Level: %d\n", player_list[i].level);
		printf("Health: %d\n", player_list[i].health);
	}
		
	return (0);
}
