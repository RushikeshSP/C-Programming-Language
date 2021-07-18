/*

Que 24: Write a C program to find HCF (GCD) of two numbers.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                      *********  Solution  *********

#include <stdio.h> // Including Necessary Header Files

void main()
{
    int num1, num2, min, gcd; // Initialization of necessary variables

    printf("Enter First Number: ");
    scanf("%d", &num1); // Get input first number

    printf("Enter Second Number: ");
    scanf("%d", &num2); // Get input second number

    min = (num1 < num2) ? num1 : num2; // Check minimum of two numbers

    for (int i = 1; i <= min; i++) // For loop to get gcd
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i; // store the gcd
        }
    }

    printf("The GCD of %d and %d is: %d", num1, num2, gcd);
}