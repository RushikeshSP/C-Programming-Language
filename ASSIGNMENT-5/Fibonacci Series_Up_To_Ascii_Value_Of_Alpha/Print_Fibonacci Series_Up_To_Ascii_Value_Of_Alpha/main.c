/*

Que : 18. Write a C program to print all fibonacci series upto each ASCII code of aphabates in given string. (Using Dynamic Memory Allocation)
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.
//#include<stdlib.h>

void main() {

	int n, i = 0, no_of_char = 1; // Declaration of variables.
	char ch;
	char* p = NULL; // Initializing pointer to null value.


	// Syntax for Dynamic memory allociation of array.
	p = (char*)malloc(sizeof(char)); // Given 1 byte memory dynamically..

	*(p + i) = '\0'; // String terminating character is added at position 0 of array..

	printf("Enter the string : ");

	// Logic to take input in array using DMA.
	do
	{
		scanf_s("%c", &ch);
		if (ch != '\n') {
			no_of_char++;
			p = (char*)realloc(p, no_of_char * sizeof(char)); // reallocate memory to new character.
			*(p + i) = ch;
			*(p + i + 1) = '\0';
			i++;
		}

	} while (ch != '\n');

	printf("User Entered String is: ");
	int j = 0;
	while (*(p + j) != '\0') // While loop to print array..
	{
		printf("%c", *(p + j));
		j++;
	}

	// Logic to print fibonacci series upto each ASCII code of aphabates in given string.
	i = 0;
	while (*(p + i) != '\0')
	{
		int count = *(p + i);
		int num1 = 0, num2 = 1, result; // Initialise required variables

		printf("\nFibonacci Series up to Number %d is: ", count);
		printf("%d %d ", num1, num2); // First two default terms of the fibonacci series

		while (1)
		{
			result = num1 + num2;
			if (result > count) {
				break;
			}
			printf("%d ", result);
			num1 = num2;
			num2 = result;
		}
		i++;
	}

	free(p); // To free the memory given to array p dynamically..
}
