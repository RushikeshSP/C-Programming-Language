/*

Que 25: Write a C program to find LCM of two numbers.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                      *********  Solution  *********

#include <stdio.h> // Including Necessary Header Files

void main()
{

    int num1, num2, max; // Initialization of necessary variables

    printf("Enter First Number: ");
    scanf("%d", &num1); // Get input first number

    printf("Enter Second Number: ");
    scanf("%d", &num2); // Get input second number

    if (num1 > num2) // Check maximum of two numbers
    {
        max = num1;
    }
    else
    {
        max = num2;
    }

    while (1) // Initialise infinite while loop
    {
        if (max % num1 == 0 && max % num2 == 0) // Check for the LCM of given two numbers
        {
            printf("The LCM of %d and %d is: %d", num1, num2, max);
            break;
        }
        max++;
    }
}