/*
Name   : RANDY KOFI
Adm No : BCS-05-0211/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
*/

#include <stdio.h>


int calculateTotal(int mark1, int mark2, int mark3)
{
    return mark1 + mark2 + mark3;
}

float calculateAverage(int total)
{
    return total / 3.0;
}

void displayResult(float average)
{
    if (average >= 50)
        printf("Result: Passed\n");
    else
        printf("Result: Failed\n");
}

int main()
{
    int mark1, mark2, mark3, total;
    float average;

    printf("Enter marks for three subjects: ");
    scanf("%d %d %d", &mark1, &mark2, &mark3);

    total = calculateTotal(mark1, mark2, mark3);
    average = calculateAverage(total);

    printf("Total marks: %d\n", total);
    printf("Average mark: %.2f\n", average);

    displayResult(average);

    return 0;
}