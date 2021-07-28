/*

Que : 34. Write a C Program to Input a String & Store their Ascii Values in an Integer Array (Using Dynamic Memory Allocation)
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

	// Logic to take string input in array using DMA.
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

	int no_of_elements = no_of_char - 1; // Number of elements to create integer array.


	int* arr = NULL; // Initializing pointer to null value.

	arr = (int*)malloc(no_of_elements * sizeof(int)); // Syntax for Dynamic memory allociation of array

	
	i = 0;
	while (*(p + i) != '\0') // For loop to store ascii value of input string into int array.
	{
		*(arr + i) = (int)*(p + i);
		i++;
	}

	printf("Array of Ascii Values Of Input String Is : [ ");
	for (int i = 0; i < no_of_elements; i++) //For loop to print int arrary elements
	{
		printf("%d ", *(arr + i));
	}
	printf("]");

	free(p); // Free the memory given to p dynamically..
	free(arr); // Free the memory given to arr dynamically..

}