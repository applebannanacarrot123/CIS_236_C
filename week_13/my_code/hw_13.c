// David Kovalev
// Week 13 homework
// Program that stores information about movies, using an array of structures and a text file. 

#include <stdio.h>


// Movie data structure
typedef struct {
	char name[20];
	int downloads;
	
} movie_t;


void getMovieInfo(movie_t m_array[], int m_amount);
void displayMovieInfo(movie_t m_arr[], int i);

int main(){
	int movie_amount = 10;

	// Movie array & processing
	movie_t movies[movie_amount];
	getMovieInfo(movies, 10);
	
	// Movie array displaying
	displayMovieInfo(movies, movie_amount);
	
	return 0;
}


//   Transforms file input and outputs to array of movies structure
void getMovieInfo(movie_t m_array[], int m_amount){
	// Open file
	FILE * file_ptr = fopen("Week13DataFileRequired.txt", "r");
	if(file_ptr == NULL){
		printf("Error reading file.\n");
		return;
	}
	
	
	int index = 0;
	// Loop until EOF or until movie array full
	while(!feof(file_ptr) && (index < 10)){
		// Movie Name
		fscanf(file_ptr, "%s", m_array[index].name);
		m_array[index].name[19] == '\0';
		
		// Movie downloads
		fscanf(file_ptr, "%d", &m_array[index].downloads);
		
		index ++;
	}
		
	fclose(file_ptr);
}

//   Takes in an array of movies and displays them
void displayMovieInfo(movie_t array[], int len){
	printf("%-20s%20s\n", "Title", "Downloads");
	printf("%-20s%20s\n", "=====", "=========");
	
	for(int i = 0; i < len; i ++){
		movie_t m = array[i];
		
		// Do not print non-filled array indicies
		if(m.downloads != 0){
			printf("%-20s%20d\n", m.name, m.downloads);
		}
	}
	
}
