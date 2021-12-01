// David Kovalev
// Homework week 7
// Program that receives input and prints out the sorted and unsorted
// total number of players at a level in a game


#include <stdio.h>

#define LEVELS 6
// Included to use in bubblesort, SIZE is equal to LEVELS
#define SIZE 6

void bubbleSort(int array[]);
void swap(int *e1, int *e2);

int main(){
	// Initialize variables
	int player_array[LEVELS] = {0, 0, 0, 0, 0, 0};
	int user_input = 0;
	
	// Prototype Functions
	void update_level(int, int[]);
	void display_levels(const int[]);
	
	
	// User input loop
	while(user_input != -1){ // Sentinel = -1
		printf("Player points (-1 to quit): ");
		scanf("%d", &user_input);
		update_level(user_input, player_array);
	}
	
	// User exited loop
	display_levels(player_array);
	bubbleSort(player_array);
	display_levels(player_array);
	
	
	return 0;
}


// Updates array to include given player points
void update_level(int points, int p_array[]){
	// This structure does not need to check if its within 10 of the minimum. i.e. (40 <= x <= 49)
	// 50 <= points --> p[5]
	if(50 <= points){
		p_array[5] ++;
	}
	// 40 <= points --> p[4]
	else if(40 <= points){
		p_array[4] ++;
	}
	// 30 <= points --> p[3]
	else if(30 <= points){
		p_array[3] ++;
	}
	// 20 <= points --> p[2]
	else if(20 <= points){
		p_array[2] ++;
	}
	// 10 <= points --> p[1]
	else if(10 <= points){
		p_array[1] ++;
	}
	// 0 <= points --> p[0]
	else if(0 <= points){
		p_array[0] ++;
	}
}


// Neatly displays content of the array
void display_levels(const int p_array[]){
	printf("\n\nT O T A L S\n\n");
	
	// Loops through array and prints level # and players at level #
	for(int i = 0; i < LEVELS; i++){
		printf("Level %d%5d\n", i + 1, p_array[i]);
	}
}



// ***********************Borrowed code*******************************

// Sort an array of integers using bubble sort algorithm.
// As provided, this function sorts in ASCENDING order.
void bubbleSort(int array[])
{
   for (unsigned int pass = 0; pass < SIZE - 1; ++pass) {
      for (size_t j = 0; j < SIZE - 1; ++j) {
         if (array[j] < array[j + 1]) {
            swap(&array[j], &array[j + 1]);
         } 
      } 
   } 
}

// Swap values at the memory locations pointed to by
// element1Ptr and element2Ptr.
void swap(int *element1Ptr, int *element2Ptr)            
{                                                          
   int hold = *element1Ptr;                                
   *element1Ptr = *element2Ptr;                            
   *element2Ptr = hold;                                    
}

