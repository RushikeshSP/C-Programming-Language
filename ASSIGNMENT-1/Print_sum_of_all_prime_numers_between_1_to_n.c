/*

Que 28: Write a C program to find sum of all prime numbers between 1 to n.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                      *********  Solution  *********

#include <stdio.h> // Including Necessary Header Files

void main()
{

    int num, sum = 0; //Initialization of variables

    printf("Enter a number: ");
    scanf("%d", &num); // Taken a user input

    for (int i = 1; i <= num; i++) // For loop to print prime numbers from 1 to n
    {
        int count = 0;
        for (int j = 1; j <= i; j++) // For loop to check number is prime or not.
        {
            if (count > 2)
            {
                break; // Check if count of numbers divided is greater then 2 then it is not an prime number hence break the loop.
            }
            if (i % j == 0)
            {
                count++; // Check factors of a number and increase the count
            }
        }
        if (count <= 2)
        {
            sum = sum + i; // calculate sum of prime numbers
        }
    }

    printf("The sum of all prime numbers Between 1 to %d is: %d", num, sum);
}