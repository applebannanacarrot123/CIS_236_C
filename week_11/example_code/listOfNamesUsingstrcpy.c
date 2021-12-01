#include <stdio.h>
#include <string.h>
#define NUM_NAMES 4
#define MAX_LENGTH 10

int main() {
	char names [NUM_NAMES] [MAX_LENGTH];
	char userInput[MAX_LENGTH];
	
	for (int i = 0; i < NUM_NAMES; i++){
		printf("Type an animal name: ");
		scanf("%s", userInput);
		strcpy(names[i], userInput);
	}
	
	puts("");
	puts("Printing the array one name at a time");
	puts("The animals are:");
	
	for (int i = 0; i < NUM_NAMES; i++){
		printf("%s\n",names[i]);
	}
}
