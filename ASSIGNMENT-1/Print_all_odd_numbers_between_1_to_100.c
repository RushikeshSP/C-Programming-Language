/*

Que 5: Write a C program to print all odd number between 1 to 100.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                              *********  Solution  *********

#include <stdio.h> // Including Necessary Header Files

void main()
{

    int num = 1; //Initialization of the variable

    //While loop starts
    while (num <= 100)
    {
        if (num % 2 != 0)
        { //Condition to check odd numbers
            printf("%d\n", num);
        }
        num++;
    } // While loop end
}