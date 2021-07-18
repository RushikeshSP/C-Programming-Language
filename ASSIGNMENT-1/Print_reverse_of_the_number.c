/*

Que 16: Write a C program to enter a number and print its reverse.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                              *********  Solution  *********

#include <stdio.h> // Including Necessary Header Files

void main()
{

    int num, revNum = 0, temp; // Initialization of necessary variables

    printf("Enter a number: ");
    scanf("%d", &num); // Thaking input from user

    while (num > 0)
    {

        temp = num % 10;
        revNum = (revNum * 10) + temp; // To get the reverse of the number
        num = num / 10;
    }

    printf("The Reverse Number of the given number is: %d", revNum);
}