/*
Name   : RANDY KOFI
Adm No : BCS-05-0211/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double length, width, diagonal;

    printf("Enter the length of the window: ");
    scanf("%lf", &length);

    printf("Enter the width of the window: ");
    scanf("%lf", &width);


    diagonal = sqrt(pow(length, 2) + pow(width, 2));


    printf("Length: %.2f\n", length);
    printf("Width: %.2f\n", width);
    printf("Diagonal: %.2f\n", diagonal);

    return 0;
}