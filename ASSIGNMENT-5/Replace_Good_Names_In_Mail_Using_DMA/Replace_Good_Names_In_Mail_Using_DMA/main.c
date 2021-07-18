/*

Que : 16. Write a C program to replace Good names in mail.
		Eg:
			Raw String: Hello GoodName
			Input String: India
			Output String: Hello India
			Input String: Sangamner
			Output String: Hello Sangamner
			Input String: technOrbit
			Output String: Hello technOrbit
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
	char raw_string[100] = { "Hello GoodName" };

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


	printf("\nThe Output string is: ");
	// Logic to replace good names in mail.
	i = 0, j = 0;

	while (raw_string[j] != ' ') {
		printf("%c", raw_string[j]);
		j++;
	}
	printf(" ");
	while (*(p + i) != '\0')
	{
		printf("%c", *(p + i));
		i++;
	}

	free(p); // Free the memory which is given to pointer p Dynamically...
}