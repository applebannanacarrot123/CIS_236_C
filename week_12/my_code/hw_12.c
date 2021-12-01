// David Kovalev
// Week 12 homework
// Program that stores information about movies, using an array of structures.

#include <stdio.h>


// Movie data structure
typedef struct {
	char name[20];
	int downloads;
	
} movie_t;


void getMovieInfo(movie_t * m);
void displayMovieInfo(movie_t m_arr[], int i);

int main(){
	// Prompt and set for # of movies
	int movie_amount;
	printf("How many movies to process: ");
	scanf("%d", &movie_amount);
	
	// Movie array & processing
	movie_t movies[movie_amount];
	for(size_t i = 0; i < movie_amount; i ++){
		movie_t input;
		getMovieInfo(&input);
		movies[i] = input;
	}
	
	// Movie array displaying
	displayMovieInfo(movies, movie_amount);
	
	return 0;
}


//   Transforms user input and outputs to movie structure
void getMovieInfo(movie_t * m){
	fflush(stdin);
	printf("Title of movie (max of 20 chars): ");	
	gets(m->name);
		
	// If last character not an null character then > 20 chars
	if(m->name[19] != '\0'){
		printf("Title will be truncated to 20 characters...\n");
	}
	// Ensure valid end character
	m->name[19] = '\0';
	
	fflush(stdin);
	printf("Number of downloads: ");
	scanf("%d", &(*m).downloads);
}

//   Takes in an array of movies and displays them
void displayMovieInfo(movie_t array[], int len){
	printf("%-20s%20s\n", "Title", "Downloads");
	printf("%-20s%20s\n", "=====", "=========");
	
	for(int i = 0; i < len; i ++){
		movie_t m = array[i];
		printf("%-20s%20d\n", m.name, m.downloads);
	}
	
}
