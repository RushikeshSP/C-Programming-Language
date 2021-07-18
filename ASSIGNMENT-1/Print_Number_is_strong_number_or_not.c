/*

Que 34: Write a C program to check whether a number is Strong number or not.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                      *********  Solution  *********

#include <stdio.h> // Including Necessary Header Files

void main()
{
    int num, number, rem, result = 0; //Initialization of necessary variables

    printf("Enter a Number: ");
    scanf("%d", &num); //Taking user input number

    number = num;
    while (num > 0) // While loop to get a perfect number.
    {
        rem = num % 10; // get a digit of a number
        int fact = 1;
        for (int i = 1; i <= rem; i++) // For loop to calculate factorial of a number.
        {
            fact = fact * i;
        }
        result = result + fact; // sum of factorial of each digits in a number
        num = num / 10;
    }

    if (number == result) // get the result by checking the given number and result number is same or not.
    {
        printf("The given number %d is an Strong Number.", number);
    }
    else
    {
        printf("The given number %d is not an Strong Number.", number);
    }
}