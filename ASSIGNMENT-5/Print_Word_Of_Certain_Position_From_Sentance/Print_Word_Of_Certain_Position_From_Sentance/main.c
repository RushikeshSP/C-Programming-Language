/*

Que : 29. Write a C program which accept sentence from user and position from user and print the word at that position. (Using Dynamic Memory Allocation)
			Eg:
				Input String: India is my country
				Input Position: 3
				Output String: my
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> // Include necessary header files
#include<stdlib.h>


void main() {

	int n, i = 0, no_of_char = 1, position; // Declaration of variables.
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


	printf("Enter the position of word: ");
	scanf_s("%d", &position);

	printf("Position of the word to print is: %d\n", position);

	printf("The word at position %d is: ", position);
	// Logic to print the word of Specific position.
	i = 0;
	int count = 0;
	while (*(p + i) != '\0')
	{
		if (*(p + i) == ' ') // Condition for skiping the white spaces
		{
			i++;
			continue;
		}
		if (*(p + i) != ' ')
		{
			count++;
			if (count == position) {
				while (*(p + i) != ' ') {
					printf("%c", *(p + i));
					i++;
				}
			}
			while (*(p + i) != ' ') {
				if (*(p + i) == '\0') {
					break;
				}
				i++;
			}
			i++;
		}
	}
	printf("\n");

	free(p); // Free the memory given to p dynamically..

}