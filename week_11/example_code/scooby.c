#include <stdio.h>
#include <string.h>

int
main(void)
{
	char  dog_name[10] = "Scooby";
	char  cat_name[10] = "Grumpy";
	
	printf("Example 1 Results\n");
	printf("%s", dog_name);
	printf("%s", cat_name);
	
	printf("\n\nExample with field widths, right-justified\n");
	printf("%10s", dog_name);
	printf("%10s", cat_name);
	
	printf("\n\nExample with field widths, left-justified\n");
	printf("%-10s", dog_name);
	printf("%-10s", cat_name);
	
	printf("\n\nOutput printed via loop\n");
	
	int i = 0;
	while (dog_name[i] != '\0'){
		printf("%c", dog_name[i]);
		i++;
	}
	
	puts("");
	
	i = 0;
	while (cat_name[i] != '\0'){
		printf("%c", cat_name[i]);
		i++;
	}
	return (0);
}
