/*

Que 6: Write a C program to find sum of all natural numbers between 1 to n.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                              *********  Solution  *********

#include <stdio.h> // Including Necessary Header Files

void main()
{

    int num, sum = 0; //Initialization of the variables

    printf("Enter the number: "); // Display Message
    scanf("%d", &num);            //Taking User Input

    //While loop starts
    while (num >= 1)
    {
        sum = sum + num;
        num--;
    } // While loop end

    printf("The sum of all natural numbers upto given number is: %d", sum);
}