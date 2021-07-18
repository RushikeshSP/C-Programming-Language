/*

Que 31: Write a C program to print all Armstrong numbers between 1 to n.
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

    for (int i = 1; i <= num; i++)
    {
        int num1 = i;
        int temp1 = num1, count = 0, result = 0, number, temp; //Initialization of necessary variables
        number = num1;                                         // num is stored for future puropse

        while (temp1 > 0) // While loop for counting the number of digits in a given number.
        {
            count++;
            temp1 = temp1 / 10;
        }

        while (num1 > 0) //While loop to check number is Armstrong number or not
        {
            temp = num1 % 10;
            int rem = 1;
            for (int j = 0; j < count; j++) // For loop to get the power of each digit for count number of times.
            {
                rem = rem * temp;
            }

            result = result + rem;
            num1 = num1 / 10;
        }

        if (number == result) //One of the condition to check number is armstrong or not
        {
            printf("%d ", number);
        }
    }
}