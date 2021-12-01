#include <stdio.h> 

void print_report(int month_num); // function prototype
void column_headings();

int 
main(void)
{
	for (int month = 1; month <= 5; ++month) {
		print_report(month); // function call
	}

}

void 
print_report(int month_num) //function header
{
	switch (month_num) 
	{
		case 1:
			printf("January Report\n");
			break;
		case 2:
			printf("February Report\n");
			break;
		case 3:
			printf("March Report\n");
			break;
		case 4:
			printf("April Report\n");
			break;
		case 5:
			printf("May Report\n");
			break;
	}
	column_headings();
}

void 
column_headings()
{
	printf("%s%4c%s%4c\n\n", "Column 1", ' ', "Column 2", ' ');
}

