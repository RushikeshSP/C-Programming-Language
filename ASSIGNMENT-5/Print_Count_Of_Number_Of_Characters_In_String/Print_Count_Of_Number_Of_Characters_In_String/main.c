/*

Que : 6. Write a C program to print count of number characters in given string. (Using Dynamic Memory Allocation)
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> // Include necessary header files
#include<stdlib.h>


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

	// Logic to count number of characters in given string.
	int k = 0, count = 0;
	while (*(p + k) != '\0')
	{
		while (*(p + k) == ' ')
		{
			k++;
		}
		while (*(p + k) != ' ')
		{
			if (*(p + k) == '\0') {
				break;
			}
			count++;
			k++;
		}
	}
	printf("\nThe count of characters in given string is: %d", count);



	free(p); // Free the memory which is given to pointer p Dynamically...
}