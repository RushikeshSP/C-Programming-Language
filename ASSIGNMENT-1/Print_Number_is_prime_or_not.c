/*

Que 26: Write a C program to check whether a number is Prime number or not.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                      *********  Solution  *********

#include <stdio.h> // Including Necessary Header Files

void main()
{

    int num, count = 0; //Initialization of variables

    printf("Enter a number: ");
    scanf("%d", &num); // Taken a user input

    for (int i = 1; i <= num; i++)
    {
        if (count > 2)
        {
            break; // Check if count of numbers divided is greater then 2 then it is not an prime number hence break the loop.
        }

        if (num % i == 0)
        {
            count++; // Check factors of a number and increase the count
        }
    }

    if (count <= 2)
    {
        printf("The given number %d is a prime number.", num);
    }
    else
    {
        printf("The given number %d is not an prime number.", num);
    }
}