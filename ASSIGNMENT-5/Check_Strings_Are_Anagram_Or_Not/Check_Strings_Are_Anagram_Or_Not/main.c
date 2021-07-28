/*

Que : 35. Write a C program to check whether given strings are Anagram strings or not. (Using Dynamic Memory Allocation)
			Eg:
				Input String1: abccd
				Input String2: cbcda
				Output String: Strings are anagram
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> // Include necessary header files
#include<stdlib.h>


void main() {

	// Logic to take first string input.
	int n, i = 0, no_of_char = 1; // Declaration of variables.
	char ch;
	char* p = NULL; // Initializing pointer to null value.

	// Syntax for Dynamic memory allociation of array.
	p = (char*)malloc(sizeof(char)); // Given 1 byte memory dynamically..

	*(p + i) = '\0'; // String terminating character is added at position 0 of array..

	printf("Enter the first string : ");

	// Logic to take string1 input in array using DMA.
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

	// Logic to take second string input.
	i = 0, no_of_char = 1; // Declaration of variables.
	char* q = NULL; // Initializing pointer to null value.

	// Syntax for Dynamic memory allociation of array.
	q = (char*)malloc(sizeof(char)); // Given 1 byte memory dynamically..

	*(q + i) = '\0'; // String terminating character is added at position 0 of array..

	printf("Enter the second string : ");

	// Logic to take string2 input in array using DMA.
	do
	{
		scanf_s("%c", &ch);
		if (ch != '\n') {
			no_of_char++;
			q = (char*)realloc(q, no_of_char * sizeof(char)); // reallocate memory to new character.
			*(q + i) = ch;
			*(q + i + 1) = '\0';
			i++;
		}

	} while (ch != '\n');

	printf("User Entered Strings are: \n");
	int j = 0;
	while (*(p + j) != '\0') // While loop to print array..
	{
		printf("%c", *(p + j));
		j++;
	}
	printf("\n");
	j = 0;
	while (*(q + j) != '\0') // While loop to print array..
	{
		printf("%c", *(q + j));
		j++;
	}
	printf("\n");

	// Logic to Check strings are anagram or not.

	int len1 = 0, len2 = 0;
	while (*(p + len1) != '\0') {
		if (*(p + len1) == '\n') {
			len1--;
			break;
		}
		len1++;
	}
	while (*(q + len2) != '\0') {
		if (*(q + len2) == '\n') {
			len2--;
			break;
		}
		len2++;
	}

	int flag1 = 0;

	for (int i = 0; i <= len2; i++)
	{
		int flag = 0;
		for (int j = 0; j <= len1; j++)
		{
			if (*(p + i) == *(q + j)) {
				flag = 1;
				break;
			}
		}

		if (flag == 0) {
			flag1 = 1;
			break;
		}
	}

	if (flag1 == 1) {
		printf("Given Strings are not an Anagram Strings\n");
	}
	else {
		printf("Given Strings are Anagram Strings\n");
	}

	free(p); // Free the memory given to p dynamically..
	free(q); // Free the memory given to arr dynamically..

}