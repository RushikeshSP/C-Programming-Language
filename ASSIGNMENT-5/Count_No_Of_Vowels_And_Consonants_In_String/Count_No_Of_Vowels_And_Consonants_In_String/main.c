/*

Que : 9. Write a C program to count count of number of vowels and number of consonants in the given string. (Using Dynamic Memory Allocation)
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

	char vowels[] = { 'a','e','i','o','u','A','E','I','O','U' };
	char consonants[] = { 'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z','B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Y','Z' };
	int vowels_count = 0, consonants_count = 0;


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

	int size_vowels = sizeof(vowels);
	int size_consonants = sizeof(consonants);
	int size_datatype = sizeof(vowels[0]);
	int vowels_len = size_vowels / size_datatype; // Calculating size of array vowels
	int consonants_len = size_consonants / size_datatype; // Calculating size of array consonants


	// Logic to count the number of vowels and consonants in given string.
	i = 0;
	while (*(p + i) != '\0') {
		if (*(p + i) == ' ') {
			i++;
			continue;
		}
		for (int j = 0; j < vowels_len; j++)
		{
			if (*(p + i) == vowels[j]) // If vowels fount in string increase count of vowels
			{
				vowels_count++;
				break;
			}
		}
		for (int k = 0; k < consonants_len; k++)
		{
			if (*(p + i) == consonants[k]) // If consonants fount in string increase count of consonants
			{
				consonants_count++;
				break;
			}
		}
		i++;
	}

	printf("\nThe vowels count in given string is: %d\n", vowels_count);
	printf("The consonants count in given string is: %d\n", consonants_count);



	free(p); // Free the memory which is given to pointer p Dynamically...
}