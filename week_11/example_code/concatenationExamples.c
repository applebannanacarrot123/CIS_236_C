#include <stdio.h>
#include <string.h>
#define SIZE 10

//void printStringAsArray1(char[]);
void printStringAsArray2(char[]);
void printString(char[]);

int main(){
	
	char course_name[10] = "CIS";
	char course_code[4] = "236";
	
	printf("Using strcat\n");
	strcat(course_name, course_code);

	puts(" ");
	printStringAsArray2(course_name);
	
	puts(" ");
	printString(course_name);
	
	char course_name2[10] = "CIS";
	printf("Using strncat\n");
	strncat(course_name2, course_code, 2);

	puts(" ");
	printStringAsArray2(course_name2);
	
	puts(" ");
	printString(course_name2);
	
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
