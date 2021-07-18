/*

Que 10: Write a C program to count number of digits in a number.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                              *********  Solution  *********

#include <stdio.h> // Including Necessary Header Files

void main()
{

    int num, count = 0; //Initialization of the variables

    printf("Enter the number: "); // Display Message
    scanf("%d", &num);            //Taking User Input

    //While loop starts
    while (num > 0)
    {
        num = num / 10;
        count++;
    } // While loop end

    printf("The number of digits in a given number are: %d", count);
}