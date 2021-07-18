/*

Que 22: Write a C program to find all factors of a number.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                      *********  Solution  *********

#include <stdio.h> // Including Necessary Header Files

void main()
{

    int num; // Initialize the necessary variables

    printf("Enter a number: ");
    scanf("%d", &num); // Take a number Input from user

    printf("All factors of a number %d are: ", num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        { // Condition to know the number is factor of given number or not
            printf("%d ", i);
        }
    }
}