/*

Que 32: Write a C program to check whether a number is Perfect number or Not.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                      *********  Solution  *********

#include <stdio.h> // Including Necessary Header Files

void main()
{
    int num, result = 0; //Initialization of necessary variables

    printf("Enter a Number: ");
    scanf("%d", &num); //Taking user input number

    for (int i = 1; i < num; i++) // For loop to ckeck number is perfect number of not.
    {
        if (num % i == 0) // Condition for perfect number.
        {
            result = result + i;
        }
    }

    if (num == result) //If number is perfect is perfect then print the result.
    {
        printf("The given number %d is an Perfect Number.", num);
    }
    else
    {
        printf("The given number %d is not an Perfect Number.", num);
    }
}