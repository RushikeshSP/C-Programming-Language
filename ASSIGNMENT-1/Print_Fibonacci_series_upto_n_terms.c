/*

Que 36: Write a C program to print Fibonacci series up to n terms.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                      *********  Solution  *********

#include <stdio.h> // Including Necessary Header Files

void main()
{
    int num; //Initialization of necessary variables

    printf("Enter a Number: ");
    scanf("%d", &num); //Taking user input number

    int num1 = 0, num2 = 1, result; // Initialise required variables

    printf("Fibonacci Series up to %d terms is: ", num);
    printf("%d %d ", num1, num2); // First two default terms of the fibonacci series

    for (int i = 2; i < num; i++) // For loop to print next terms of fibonacci series from third term.
    {
        result = num1 + num2;
        printf("%d ", result);
        num1 = num2;
        num2 = result;
    }
}