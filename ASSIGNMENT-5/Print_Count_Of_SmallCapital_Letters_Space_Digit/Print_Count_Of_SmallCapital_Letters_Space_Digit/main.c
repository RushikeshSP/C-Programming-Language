/*

Que : 21. Write a C program which accept sentence from user and print number of small letters, capital (Using Dynamic Memory Allocation) letters, Spaces and digits from that sentence.
			Eg:
				Input String: abcDE 5Glm1 O
				Output String: Small: 5 Capital: 4 Digits: 2 Spaces: 2
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

	// Logic to print number of small letters, capital letters, Spaces and digits
	int space_count = 0, digit_count = 0, capital_count = 0, small_count = 0;
	i = 0;
	while (*(p + i) != '\0')
	{
		if (*(p + i) == 32)
		{
			space_count++;
		}
		else if (*(p + i) >= 48 && *(p + i) <= 57) {
			digit_count++;
		}
		else if (*(p + i) >= 65 && *(p + i) <= 90) {
			capital_count++;
		}
		else if (*(p + i) >= 97 && *(p + i) <= 122) {
			small_count++;
		}
		i++;
	}

	printf("Small: %d  Capital: %d  Digits: %d  Spaces: %d\n", small_count, capital_count, digit_count, space_count);

	free(p); // To free the memory Dynamically given...

}