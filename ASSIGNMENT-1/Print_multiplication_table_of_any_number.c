/*

Que 9: Write a C program to print multiplication table of any number.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                              *********  Solution  *********

#include <stdio.h> // Including Necessary Header Files

void main()
{

    int num, i = 1; //Initialization of the variables

    printf("Enter the number: "); // Display Message
    scanf("%d", &num);            //Taking User Input

    //While loop starts
    while (i <= 10)
    {
        printf("%d x %d = %d\n", num, i, i * num);
        i++;
    } // While loop end
}