/*

Que 14: Write a C program to calculate sum of digits of a number.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                              *********  Solution  *********

#include <stdio.h> // Including Necessary Header Files

void main()
{

    int num, sumOfDigits = 0; // Initialization of necessary variables

    printf("Enter a number: ");
    scanf("%d", &num); // Thaking input from user

    while (num > 0)
    {

        sumOfDigits = sumOfDigits + (num % 10); // Formula to get the sum of digits of a number
        num = num / 10;
    }

    printf("The Sum of digits of a number is: %d", sumOfDigits);
}