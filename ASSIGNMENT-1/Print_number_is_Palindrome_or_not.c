/*

Que 17: Write a C program to check whether a number is palindrome or not.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                              *********  Solution  *********

#include <stdio.h> // Including Necessary Header Files

void main()
{

    int num, revNum = 0, temp, number; // Initialization of necessary variables

    printf("Enter a number: ");
    scanf("%d", &num); // Thaking input from user

    number = num;
    while (num > 0)
    {

        temp = num % 10;
        revNum = (revNum * 10) + temp; // To get the reverse of the number
        num = num / 10;
    }

    if (number == revNum) // Condition to check numer is palindrome or not
        printf("Yes! The given number is a palindrome number.");
    else
        printf("No! The given number is not an palindrome number.");
}