// teiste - data structures lab, 2017
// Theodoros Giannakopoulos
// Ex11: Intro to C
//  - Structs, Functions and Pointers

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// use of typedef: no need to write "struct movie" all the time, just "movie"
typedef struct {                  // struct type definition
   char title[50];
   char director[50];
   int year;   
} movie;

void printMovie(movie);

int main()
{
    movie *m;           // struct pointer declaration
    int nMovies;
    printf("Give number of movies: ");
    scanf("%d", &nMovies);
    m = (movie*) malloc(nMovies * sizeof(movie));
    for (int i=0; i<nMovies; i++)
    {
        printf("Title:");
        scanf("%s", (m[i].title));
        printf("Director:");
        scanf("%s", m[i].director);
        printf("Year:");
        scanf("%d", &m[i].year);
    }
    for (int i=0; i<nMovies; i++)    
        printMovie(m[i]);
    return 0;
}

void printMovie(movie m) // function with struct variable arguments
{
    printf("Title: %s, Director: %s, Year: %d\n", m.title, m.director, m.year);
}
