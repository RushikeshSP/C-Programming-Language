/*

Que 21: Write a C program to find power of a number using for loop.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                      *********  Solution  *********

#include <stdio.h> // Including Necessary Header Files

void main()
{

    int num, power, result = 1; // Initialize the necessary variables

    printf("Enter a number: ");
    scanf("%d", &num); // Take base number Input from user
    printf("Enter the power: ");
    scanf("%d", &power); // Take exponent number Input from user

    for (int i = 1; i <= power; i++)
    {
        result = result * num; //Get the power of the number
    }

    printf("The %d th power of the number %d is(%d ^ %d): %d", power, num, num, power, result);
}