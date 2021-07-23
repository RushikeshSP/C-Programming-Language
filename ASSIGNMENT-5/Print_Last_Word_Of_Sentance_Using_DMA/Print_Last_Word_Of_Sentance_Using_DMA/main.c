/*

Que : 27. Write a C program which accept sentence from user and print last word from that sentence. (Using Dynamic Memory Allocation)
			Eg:
				Input String: India is my country
				Output String: country
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


	// Logic to print last word from the sentence.
	i = 0;
	int position = 0, letter_count = 0;
	while (*(p + i) != '\0')
	{
		if (*(p + i) == ' ') // Condition for skiping the white spaces
		{
			i++;
			continue;
		}
		if (*(p + i) != ' ')
		{
			position = i;
			int count = 0;
			while (*(p + i) != ' ') {
				if (*(p + i) == '\0') {
					break;
				}
				count++;
				i++;
			}
			letter_count = count;
		}
	}

	printf("The last word of given sentence is: ");

	for (int i = 0; i < letter_count; i++)
	{
		printf("%c", *(p + position));
		position++;
	}

	free(p); // Free the memory given to p dynamically..

}