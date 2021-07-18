/*

Que 35: Write a C program to print all Strong numbers between 1 to n.
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

    printf("All Strong Numbers Between 1 to %d are: ", num);

    for (int a = 1; a <= num; a++) //For loop to iterate over n number of times
    {
        int num1 = a;
        int number, rem, result = 0; //Initialization of necessary variables
        number = num1;
        while (num1 > 0) // While loop to get a perfect number.
        {
            rem = num1 % 10; // get a digit of a number
            int fact = 1;
            for (int i = 1; i <= rem; i++) // For loop to calculate factorial of a number.
            {
                fact = fact * i;
            }
            result = result + fact; // sum of factorial of each digits in a number
            num1 = num1 / 10;
        }

        if (number == result) // get the result by checking the given number and result number is same or not.
        {
            printf("%d ", number);
        }
    }
}