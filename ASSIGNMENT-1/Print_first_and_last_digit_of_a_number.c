/*

Que 11: Write a C program to find first and last digit of a number.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                              *********  Solution  *********

#include <stdio.h> // Including Necessary Header Files

void main()
{

    int num, firstDigit, LastDigit; // Initialization of necessary variables

    printf("Enter a number: ");
    scanf("%d", &num); // Thaking input from user

    LastDigit = num % 10; // Formula to get last digit of the number

    while (num > 0)
    {
        firstDigit = num % 10; // Formula to get first digit of the number
        num = num / 10;
    }

    printf("The first digit is %d and The last digit is %d", firstDigit, LastDigit);
}