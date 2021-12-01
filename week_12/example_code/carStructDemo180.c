#include <stdio.h>
#include <string.h>

typedef struct {
	double price;
	int horsepower;
	char bodyType[10];
} car_t;

int main() {
	
	car_t carInfo;
	
	carInfo.price = 30000.00;
	
	printf("Type in the horsepower: ");
	scanf("%d", &carInfo.horsepower);
	//carInfo.horsepower = 30;
	
	strcpy(carInfo.bodyType, "sedan");
	
	printf("Car price is %.2f\n", carInfo.price);
	printf("Car horsepower is %d\n", carInfo.horsepower);
	printf("Car bodyType is %s\n", carInfo.bodyType);
	
}
