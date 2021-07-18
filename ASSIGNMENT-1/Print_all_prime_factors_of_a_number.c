/*

Que 29: Write a C program to find all prime factors of a number.
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

    printf("All Prime factors of a number %d are: ", num);

    for (int i = 1; i <= num; i++) //For loop to check factors of a number
    {
        int count = 0;
        if (num % i == 0) // Condition to know the number is factor of given number or not
        {
            for (int j = 1; j <= i; j++) // For loop to check factor number is prime or not.
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
                printf("%d ", i); //If factor number is prime then print it..
            }
        }
    }
}