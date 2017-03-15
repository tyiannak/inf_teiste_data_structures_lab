// teiste - data structures lab, 2017
// Theodoros Giannakopoulos
// Ex10: Intro to C
//  - Structs and Functions

#include <stdio.h>
#include <string.h>
 
struct movie {                  // struct type definition
   char title[50];
   char director[50];
   int year;   
};

void printMovie(struct movie);

int main()
{
    struct movie m1, m2;        // struct variable declaration
    // define struct variables:
    strcpy( m1.title, "Reservoir Dogs");
    strcpy( m1.director, "Quentin Tarantino") ;
    m1.year = 1992;
    strcpy( m2.title, "The Godfather" );
    strcpy( m2.director, "Francis Ford Coppola") ;
    m2.year = 1972;
    // print struct variables
    printMovie(m1);
    printMovie(m2);
    return 0;
}

void printMovie(struct movie m) // function with struct variable arguments
{
    printf("Title: %s, Director: %s, Year: %d\n", m.title, m.director, m.year);
}
