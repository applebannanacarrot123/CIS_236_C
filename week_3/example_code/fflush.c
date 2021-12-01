#include <stdio.h>

int main(void)
{
	int i;
	char c;
	
	printf("Type a number: ");
	scanf("%d", &i);
	
	//fflush(stdin);
	
	printf("Type a character: ");
	scanf("%c", &c);
	
	printf("i = %d\n", i);
	
	printf("c = %c\n", c);

}
	
