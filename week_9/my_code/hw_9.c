// David Kovalev
// Week 9 Homework
// Prints the values in an array and the addresses of the array’s elements using four different techniques
#include <stdio.h>
#define ARRAY_SIZE 5

int main(){
	void printValuesNameIndex(int[]);
	void printValuesPointerIndex(int *);
	void printValuesNameOffset(int[]);
	void printValuesPointerOffset(int *);
	void printAddressesNameIndex(int[]);
	void printAddressesPointerIndex(int *);
	void printAddressesNameOffset(int[]);
	void printAddressesPointerOffset(int *);
	
	int data[ARRAY_SIZE] = {10, 20, 30, 40, 50};
	int * dPtr = &data[0];
	
	printValuesNameIndex(data);
	printValuesPointerIndex(dPtr);
	printValuesNameOffset(data);
	printValuesPointerOffset(dPtr);
	printAddressesNameIndex(data);
	printAddressesPointerIndex(dPtr);
	printAddressesNameOffset(data);
	printAddressesPointerOffset(dPtr);
	
	return 0;
}

// Array index notation
void printValuesNameIndex(int array[]){
	printf("printValuesNameIndex\n");
	
	for(size_t i = 0; i < ARRAY_SIZE; i++){
		printf("data[%d] = %d\n", i, array[i]);
	}
}

// Pointer index notation
void printValuesPointerIndex(int *array){
	printf("\nprintValuesPointerIndex\n");
	
	for(size_t i = 0; i < ARRAY_SIZE; i++){
		printf("data[%d] = %d\n", i, array[i]);
	}
}

// Name of *(array + offset)
void printValuesNameOffset(int array[]){
	printf("\nprintValuesNameOffset\n");
	
	for(size_t i = 0; i < ARRAY_SIZE; i++){
		printf("data[%d] = %d\n", i, *(array + i));
	}
}

// Pointer of *(array + i)
void printValuesPointerOffset(int *array){
	printf("\nprintValuesPointerOffset\n");
	
	for(size_t i = 0; i < ARRAY_SIZE; i++){
		printf("data[%d] = %d\n", i, *(array + i));
	}
}

// Pointer address &array[][i]
void printAddressesNameIndex(int array[]){
	printf("\nprintAddressesNameIndex\n");
	
	for(size_t i = 0; i < ARRAY_SIZE; i++){
		printf("&data[%d] = %x\n", i, &array[i]);
	}
}

// Pointer address &*array[i]
void printAddressesPointerIndex(int *array){
	printf("\nprintAddressesPointerIndex\n");
	
	for(size_t i = 0; i < ARRAY_SIZE; i++){
		printf("&data[%d] = %x\n", i, &array[i]);
	}
}

// Name address &*(array + i)
void printAddressesNameOffset(int array[]){
	printf("\nprintAddressesNameOffset\n");
	
	for(size_t i = 0; i < ARRAY_SIZE; i++){
		printf("&data[%d] = %x\n", i, &*(array + i));
	}
}

// Pointer address &*(array + i)
void printAddressesPointerOffset(int *array){
	printf("\nprintAddressesPointerOffset\n");
	
	for(size_t i = 0; i < ARRAY_SIZE; i++){
		printf("&data[%d] = %x\n", i, &*(array + i));
	}
}
