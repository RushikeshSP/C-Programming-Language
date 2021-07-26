/*

Que : 31. Write a C program to convert the string from upper case to lower case. (Using Dynamic Memory Allocation)
			Eg:
				Input String: India Is My Country
				Output String: india is my country
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

	printf("\n");


	// Logic to convert uppercase string to lowercase.
	i = 0;
	while (*(p + i) != '\0')
	{
		while (*(p + i) != ' ')
		{
			if (*(p + i) == '\0') {
				break;
			}
			if (*(p + i) >= 65 && *(p + i) <= 90) {
				*(p + i) = *(p + i) + 32;
			}
			i++;
		}
		i++;
	}

	printf("User Entered String In Upper Case Format: ");
	j = 0;
	while (*(p + j) != '\0') // While loop to print array..
	{
		printf("%c", *(p + j));
		j++;
	}

	free(p); // Free the memory given to p dynamically..

}