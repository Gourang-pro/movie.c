#include <stdio.h>

int main() 

{
    char title[50];
    int year;
    float rating;

    printf("Enter the title of the movie: ");
    scanf("%s", title);

    printf("Enter the year of release: ");
    scanf("%d", &year);

    printf("Enter the rating of the movie (out of 10): ");
    scanf("%f", &rating);

    printf("\nTitle: %s\nYear of release: %d\nRating: %.1f/10", title, year, rating);

    return 0;
}
