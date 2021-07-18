/*

Que 20: Write a C program to print all ASCII character with their values.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                              *********  Solution  *********

#include <stdio.h> // Including Necessary Header Files

void main()
{

    printf("All ASCII characters with their values are as follows...");
    for (int i = 1; i <= 255; i++)
    {
        printf("ASCII Character = %c and It's value = %d.\n", i, i);
    }
}