/*

Que : 20. Write a C program which accepts a string from user which contains a characters from ‘b’ to ‘y’. (Using Dynamic Memory Allocation)
				Eg:
					Input String: mn jn kn kazfd
					Output String: mn jn kn k
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


	printf("\nString with characters containing 'b' to 'y' is: ");
	// Logic to print string containing characters between 'b' to 'y'
	i = 0;
	while (*(p + i) != '\0')
	{
		if ((*(p + i) >= 98 && *(p + i) <= 121) || (*(p + i) >= 66 && *(p + i) <= 89) || (*(p + i) == 32))
		{
			printf("%c", *(p + i));
		}
		i++;
	}

	free(p); // Free the memory which is given to pointer p Dynamically...
}