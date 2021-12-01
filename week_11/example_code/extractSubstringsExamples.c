#include <stdio.h>
#include <string.h>

//void printStringAsArray1(char[]);
void printStringAsArray2(char[]);
void printString(char[]);

int main(){
	
	char date[15] = "Jan. 30, 1996";
	char result[10];
	//char result[10] = {'\0'};
	
	puts("strncpy from beginning, for a distance of 9");
	strncpy(result, date, 9);
	result[9] = '\0';

	puts(" ");
	printStringAsArray2(result);
	
	puts(" ");
	printString(result);
	
	char result2[10];
	//char result2[10] = {'\0'};
	puts("\nstrncpy from index 5, for a distance of 2");
	strncpy(result2, &date[5], 2);
	result[9] = '\0';

	puts(" ");
	printStringAsArray2(result2);
	
	puts(" ");
	printString(result2);
	
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
	for (int i = 0; i < 10; i++) {
		if (arrayToPrint[i] == '\0')
			printf("\\0");
		else
			printf("%c", arrayToPrint[i]);
	}
}
