/*

Que 30: Write a C program to check whether a number is Armstrong number or Not.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                      *********  Solution  *********

#include <stdio.h> // Including Necessary Header Files

void main()
{
    int num, number, temp, result = 0; //Initialization of necessary variables

    printf("Enter a Number: ");
    scanf("%d", &num); //Taking user input number

    number = num; // num is stored for future puropse

    int temp1 = num, count = 0;

    while (temp1 > 0)
    {
        count++;
        temp1 = temp1 / 10;
    }

    while (num > 0) //While loop to check number is Armstrong number or not
    {
        temp = num % 10;
        int rem = 1;
        for (int i = 0; i < count; i++)
        {
            rem = rem * temp;
        }

        result = result + rem;
        num = num / 10;
    }

    if (number == result) //One of the condition to check number is armstrong or not
    {
        printf("The given number %d is an Armstrong number.", number);
    }
    else
    {
        printf("The given number %d is not an Armstrong number.", number);
    }
}