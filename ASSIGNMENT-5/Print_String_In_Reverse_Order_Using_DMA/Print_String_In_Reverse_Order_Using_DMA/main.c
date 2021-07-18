/*

Que : 7. Write a C program to accept string and print it in the reverse order. (Using Dynamic Memory Allocation)
			Eg:
				Input String: India is my country
				Output String: yrtnuoc ym si aidnI
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


	// Logic to print reverse of string.
	int k = 0;
	while (*(p + k) != '\0')
	{
		if (*(p + k) == '\n') {
			break;
		}
		k++;
	}
	int last_char = k--; // Get the last charcter of the string

	printf("\nThe Reverse Order String is: ");

	for (int i = last_char - 1; i >= 0; i--) // For loop to print array element in reverse.
	{
		printf("%c", *(p + i));
	}

	free(p); // Free the memory which is given to pointer p Dynamically...
}