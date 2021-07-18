/*

Que 19: Write a C program to enter a number and print it in words.
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

    while (revNum > 0)
    {
        temp = revNum % 10;

        if (temp == 1)
            printf("One ");
        else if (temp == 2)
            printf("Two ");
        else if (temp == 3)
            printf("Three ");
        else if (temp == 4)
            printf("Four ");
        else if (temp == 5)
            printf("Five ");
        else if (temp == 6)
            printf("Six ");
        else if (temp == 7)
            printf("Seven ");
        else if (temp == 8)
            printf("Eight ");
        else if (temp == 9)
            printf("Nine ");
        else if (temp == 0)
            printf("Zero ");

        revNum = revNum / 10;
    }
}