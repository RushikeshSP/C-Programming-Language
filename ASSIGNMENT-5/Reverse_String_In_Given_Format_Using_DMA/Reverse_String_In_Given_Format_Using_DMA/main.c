/*

Que : 10. Write a C program to reverse a given string as below. (Using Dynamic Memory Allocation)
			Eg:
				Input String: India is my country
				Output String: aidnI si ym yrtnuoc
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> // Include necessary header files
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

	printf("\nThe Reverse Order String is: ");
	// Logic to print worls reverse of string.
	i = 0;
	int flag = 0;
	while (*(p + i) != '\0')
	{
		if (*(p + i) == ' ') // Condition for skiping the unnecessary extra white spaces
		{
			i++;
			continue;
		}
		if (*(p + i) != ' ')
		{
			int first_count = i;
			while (*(p + i) != ' ')
			{
				if (*(p + i) == '\0')
				{
					break;
				}
				i++;
			}
			int last_count = i;

			for (int j = last_count - 1; j >= first_count; j--) // Print the string in reverse
			{
				printf("%c", *(p + j));
			}
			printf(" "); // For printing space in between two words.
		}
	}

	free(p); // Free the memory which is given to pointer p Dynamically...
}