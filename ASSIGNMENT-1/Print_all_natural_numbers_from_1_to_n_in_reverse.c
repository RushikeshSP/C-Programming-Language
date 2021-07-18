/*

Que 2: Write a C program to print all natural numbers in reverse (from n to 1). -Using while loop
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                              *********  Solution  *********

#include <stdio.h> // Including Necessary Header Files

void main()
{

    int num; //Initialization of the variables

    printf("Enter the number: "); // Display Message
    scanf("%d", &num);            //Taking User Input

    //While loop starts
    while (num >= 1)
    {
        printf("%d\n", num);
        num--;
    } // While loop end
}