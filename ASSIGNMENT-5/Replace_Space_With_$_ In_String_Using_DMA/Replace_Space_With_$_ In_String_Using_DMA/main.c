/*

Que : 12. Write a C program to replace space with ‘$’ in given string. (Using Dynamic Memory Allocation)
				Eg:
						Input String: India is my country
						Output String: India$is$my$coutry
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.
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

	printf("\nThe Modified string is: ");
	// Logic to replace the white spaces with '$' in given string.
	i = 0;
	int flag = 0;
	while (*(p + i) != '\0')
	{
		if (*(p + i) == ' ') // Condition for replacing the white space with '$'
		{
			*(p + i) = '$';
			i++;
			continue;
		}
		if (*(p + i) != ' ')
		{
			if (*(p + i) == '\0') {
				break;
			}
			i++;
			continue;
		}
	}
	j = 0;
	while (*(p + j) != '\0') // While loop to print array..
	{
		printf("%c", *(p + j));
		j++;
	}
}