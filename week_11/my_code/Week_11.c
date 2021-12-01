// David Kovalev
// Week 11 homework
//  Program that prompts the user for course information, and then prints the courses in a neatly formatted list.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	void getPrefix(char[]);
	void getNumber(char[]);
	void getName(char[]);
	void combineStrings(char[], char[], char[], char[]);
	void printList(char[5][25]);
	
	
	char courses[5][25];
	
	for(size_t i = 0; i < 5; i++){
		char prefix[4];
		char cn[4];
		char name[17];
		char result[25] = {'\0'};
		
		getPrefix(prefix);
		getNumber(cn);
		getName(name);
		combineStrings(result, prefix, cn, name);
		
		strcpy(courses[i], result);
	}
	
	printList(courses);
	
}


//   Sends valid prefix back to parameter, must be 3 letters long
void getPrefix(char prefix_string[]){
	char validated[4]; // String to hold scanf return
	int string_invalid = 1;
	
	while (string_invalid == 1){
		string_invalid = 0;
		printf("Course Prefix: ");
		scanf("%s", validated);
		
		for(size_t i = 0; i < 3; i++){
			if(!isalpha(validated[i])){ // Prefix has non-letters
				string_invalid = 1;
				break;
			}
		}
		
		// Has invalid EOF
		if(validated[3] != '\0'){
			string_invalid = 1;
		}
		
		// Notify user of invalid prefix
		if(string_invalid == 1){
			printf("Prefix must be 3 LETTERS\n");
		}
	}
	
	// Copy to parameter
	strncpy(prefix_string, validated, 4);
}


//   Sends valid course number back to parameter, must be 3 numbers long
void getNumber(char course_number_string[]){
	char validated[4]; // String to hold scanf return
	int string_invalid = 1;
	
	while (string_invalid == 1){
		string_invalid = 0;
		printf("Course Number: ");
		scanf("%s", validated);
		
		for(size_t i = 0; i < 3; i++){
			if(!isdigit(validated[i])){ // Course num has non-numbers
				string_invalid = 1;
				break;
			}
		}
		
		// Has invalid EOF
		if(validated[3] != '\0'){
			string_invalid = 1;
		}
		
		// Notify user of invalid prefix
		if(string_invalid == 1){
			printf("Course number must be 3 NUMBERS\n");
		}
	}
	
	// Copy to parameter
	strncpy(course_number_string, validated, 4);
}


//   Sends valid course name back to parameter, must be <= 16 alpha numeric characters long
void getName(char course_name_string[]){
	char validated[17]; // String to hold gets return

	printf("Course Name: ");
	fflush(stdin);
	fgets(validated, 16, stdin);
	fflush(stdin);
	
	validated[16] = '\0';
	// Copy to parameter
	strncpy(course_name_string, validated, 16);
}


//   Combines strings into a result string
void combineStrings(char result[], char prefix[], char num[], char name[]){
	// Add spaces between prefix course num and name
	prefix[3] = ' ';
	num[3] = ' ';
	name[16] = ' ';
	
	strcat(result, prefix);
	strcat(result, num);
	strcat(result, name);
	
	// Remove non alpha numerics and spaces
	for(size_t i = 0; i < 25; i++){
		if(!isalnum(result[i])){
			result[i] == ' ';
		}
	}
}


//   Prints list of strings
void printList(char strings[5][25]){
	printf("\nCourses:\n");
	
	for(size_t i = 0; i < 5; i++){
		printf("%s\n", strings[i]);
	}
}

