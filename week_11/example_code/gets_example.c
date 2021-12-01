#include <stdio.h>
#include <string.h>

int
main(void)
{
	char line[80];
	char line2[80];
	
	puts("Using scanf with %%s");
	printf("Type in a line of data: ");
	scanf("%s", line2);
	puts("");
	printf("You typed: %s", line2);
	
	puts("Using gets");
	printf("Type in a line of data: ");
	gets(line);
	puts("");
	printf("You typed: %s\n\n", line);
	
	

}
