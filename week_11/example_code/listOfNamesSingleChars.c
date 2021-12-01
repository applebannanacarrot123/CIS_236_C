#include <stdio.h>
#define NUM_NAMES 4
#define MAX_LENGTH 10

int main() {
	char names [NUM_NAMES] [MAX_LENGTH];
	
	for (int i = 0; i < NUM_NAMES; i++){
		printf("Type an animal name: ");
		scanf("%s",names[i]);
	}
	
	puts("");
	puts("Printing the array using nested loops, one character at a time");
	puts("The animals are:");
	
	for (int i = 0; i < NUM_NAMES; i++){
		for (int j = 0; j < MAX_LENGTH; j++)
			printf("%c",names[i][j]);
		printf("\n");
	}
	
	puts("");
	puts("Display single characters:");
	printf("names[0][2] = %c\n",names[0][2]);
	printf("names[2][0] = %c\n",names[2][0]);
	
	puts("");
	puts("Display single character that hasn't been initialized:");
	printf("names[2][5] = %c\n",names[2][5]);

}
