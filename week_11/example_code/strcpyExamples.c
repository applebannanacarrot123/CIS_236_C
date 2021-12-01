#include <stdio.h>
#include <string.h>
#define SIZE 18

//void printStringAsArray1(char[]);
void printStringAsArray2(char[]);
void printString(char[]);

int main(){
	
	char name[SIZE];
	char name2[SIZE];
//	char name[SIZE] = {'\0'};
//	char name2[SIZE] = {'\0'};
	
	printf("Destination longer than source\n");
	strcpy(name, "Test String"); 
	
	puts(" ");
	printStringAsArray2(name);
	
	puts(" ");
	printString(name);
	
	printf("\nSource longer than destination\n");
	strcpy(name2, "A very long test string"); 

	puts(" ");
	printStringAsArray2(name2);
	
	puts(" ");
	printString(name2);
	
}

void printString(char arrayToPrint[]) {
	printf("String printed as a string using %%s: ");
	printf("%s", arrayToPrint);
	puts("");
}

//void printStringAsArray1(char arrayToPrint[]){
//	printf("\nString printed as array of chars using %%c:\n");
//	for (int i = 0; i < SIZE; i++) {
//		if (arrayToPrint[i] == '\0')
//			printf("char at index %2d: null char\n",i);
//		else
//			printf("char at index %2d: %c\n", i,arrayToPrint[i]);
//	}
//}

void printStringAsArray2(char arrayToPrint[]){
	printf("String printed as array of chars using %%c: ");
	for (int i = 0; i < SIZE; i++) {
		if (arrayToPrint[i] == '\0')
			printf("\\0");
		else
			printf("%c", arrayToPrint[i]);
	}
}
