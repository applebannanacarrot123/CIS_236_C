#include <stdio.h>

int main() {
	
	printf("strcmp Examples\n");
	
	char string1[20] = "cat";
	char string2[20] = "hamster";
	printf ("Example 1 - %d\n", strcmp(string1, string2));
	
	char string3[20] = "hedgehog";
	char string4[20] = "dog";
	printf ("Example 2 - %d\n", strcmp(string3, string4));
	
	char string5[20] = "fish";
	char string6[20] = "fishes";
	printf ("Example 3 - %d\n", strcmp(string5, string6));
	
	printf("strncmp Examples\n");
	
	char string7[20] = "horse";
	char string8[20] = "bobcat";
	printf ("Example 1 - %d\n", strncmp(string7, string8, 5));
	
	char string9[20] = "spider";
	char string10[20] = "spider monkey";
	printf ("Example 2 - %d\n", strncmp(string9, string10, 10));
	
	char string11[20] = "spider";
	char string12[20] = "spider monkey";
	printf ("Example 3 - %d\n", strncmp(string11, string12, 6));
	
}
