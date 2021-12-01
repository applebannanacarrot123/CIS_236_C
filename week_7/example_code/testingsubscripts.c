//Examples from slides demonstrating subscripted variables
#include <stdio.h>

int
main(void)
{
	int test_array[] = {16, 12, 6, 8, 2, 12, 14, -54};
	
	int i = 4;
	printf("test_array[4] = %d\n", test_array[4]);
	
	i=4;
	printf("test_array[i] + 1 = %d\n", test_array[i] + 1);
	
	i=4;
	printf("test_array[i++] = %d, i = %d\n", test_array[i++], i);
	
	i=4;
	printf("test_array[i] = %d\n", test_array[i]);
	
	i=4;
	printf("test_array[i + 2] = %d\n", test_array[i + 2]);
	
	i=4;
	printf("test_array[--i] = %d, i = %d\n", test_array[--i], i);
	
	//bad subscripts
//	printf("test_array[-1] = %d\n", test_array[-1]);
//	printf("test_array[8] = %d\n", test_array[8]);
	
	return(0);	

}
