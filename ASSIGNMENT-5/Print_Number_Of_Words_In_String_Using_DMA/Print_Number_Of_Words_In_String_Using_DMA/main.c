/*

Que : 14. Write a program which accept sentence from user and print number of words from that sentence. (Using Dynamic Memory Allocation)
			Ex.
				Input String: India_is_my_country
				Output: 4
				Input String: ______India______is____my____country____ (Consider _ as space)
				Output: 4
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


	printf("\nThe Number of words in given string are: ");
	// Logic to count the number of words in given string.
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
			while (*(p + i) != ' ') {
				if (*(p + i) == '\0') {
					break;
				}
				i++;
			}
		}
	}

	printf("%d", count); // Print the number of world count in given string.


	free(p); // Free the memory which is given to pointer p Dynamically...
}