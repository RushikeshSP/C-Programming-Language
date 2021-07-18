/*

Que 3: Write a C program to print all alphabets from a to z. - using while loop
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                              *********  Solution  *********

#include <stdio.h> // Including Necessary Header Files

void main()
{

    int num = 97; //Initialization of the variables

    //While loop starts
    while (num <= 122)
    {
        printf("%c\n", num);
        num++;
    } // While loop end
}