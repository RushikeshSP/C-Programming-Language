/*

Que 23: Write a C program to calculate factorial of a number.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                      *********  Solution  *********

#include <stdio.h> // Including Necessary Header Files

void main()
{

    int num, fact = 1; // Initialize the necessary variables
label:
    printf("\nEnter a number: ");
    scanf("%d", &num); // Take a number Input from user

    if (num < 0)
    { // check number is negative or not
        printf("Can't find the factorial of negative numbers.");
        goto label; // If number is negative then call the label for reexecution of code
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            fact = fact * i; // Calculating factorial of a number..
        }
    }
    printf("The factorial of the number %d is: %d", num, fact);
}