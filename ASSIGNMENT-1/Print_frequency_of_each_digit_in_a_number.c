/*

Que 18: Write a C program to find frequency of each digit in a given integer.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                              *********  Solution  *********

#include <stdio.h> // Including Necessary Header Files

void main()
{

    int num, temp1, temp, rem, rem2; // Initialization of necessary variables

    printf("Enter a number: ");
    scanf("%d", &num); // Thaking input from user

    temp = num;

    while (num > 0)  // While loop to get the last digit.
    {
        rem = num % 10;
        temp1 = temp;
        int count = 0;

        while (temp1 > 0)   // While loop to get the frequency of the last digit
        {
            rem2 = temp1 % 10;

            if (rem == rem2)
            {
                count++;
            }
            temp1 = temp1 / 10;
        }

        printf("Frequency of %d is: %d\n", rem, count);
        num = num / 10;
    }
}