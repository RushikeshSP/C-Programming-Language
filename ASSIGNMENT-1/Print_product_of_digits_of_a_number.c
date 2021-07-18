/*

Que 15: Write a C program to calculate product of digits of a number.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                              *********  Solution  *********

#include <stdio.h> // Including Necessary Header Files

void main()
{

    int num, productOfDigits = 1; // Initialization of necessary variables

    printf("Enter a number: ");
    scanf("%d", &num); // Thaking input from user

    while (num > 0)
    {

        productOfDigits = productOfDigits * (num % 10); // Formula to get the product of digits of a number
        num = num / 10;
    }

    printf("The Product of digits of a number is: %d", productOfDigits);
}