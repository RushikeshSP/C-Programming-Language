/*

Que 33: Write a C program to print all Perfect numbers between 1 to n.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                      *********  Solution  *********

#include <stdio.h> // Including Necessary Header Files

void main()
{
    int num; //Initialization of necessary variables

    printf("Enter a Number: ");
    scanf("%d", &num); //Taking user input number

    printf("All Perfect Numbers Between 1 to %d are: ", num);

    for (int i = 1; i <= num; i++) // For loop to iterate for n number of times
    {
        int num1 = i, result = 0;      //Initialization of necessary variables
        for (int j = 1; j < num1; j++) // Number is perfect number or not.
        {
            if (num1 % j == 0) // Condition for perfect number.
            {
                result = result + j;
            }
        }

        if (num1 == result) // If number is perfect then print it. Otherwise go for next iteration
        {
            printf("%d ", num1);
        }
    }
}