/*

Que 1: Write a C program to print all natural numbers from 1 to n. - using while Loop
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                              *********  Solution  *********

#include <stdio.h> // Including Necessary Header Files

void main()
{

    int num;
    int i = 1; //Initialization of the variables

    printf("Enter the number: "); // Display Message
    scanf("%d", &num);            //Taking User Input

    //While loop starts
    while (i <= num)
    {
        printf("%d\n", i);
        i++;
    } // While loop end
}