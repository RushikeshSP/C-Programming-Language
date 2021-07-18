/*

Que : Write a C Program to create a 2D Matrix with values inside are string. (Using Dynamic Memory Allocation)
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> // Include necessary header files
#include<stdlib.h>


void main() {

	int row, col; // Defination of required variables

	printf("Enter Number Of Rows:");
	scanf_s("%d", &row); // Take input - Number of array elements in row.

	printf("Enter Number of Columns:");
	scanf_s("%d", &col); // Take input - Number of array elements in columns.

	char*** p = NULL; // Defination of pointer array..

	p = (char***)malloc(row * sizeof(char**)); // Allocating memory to 2D pointer p dynamically...

	for (int i = 0; i < row; i++) // For loop to assigne address of 1D array in 2D pointer array 
	{
		*(p + i) = (char**)malloc(col * sizeof(char*));
	}

	for (int i = 0; i < row; i++) // For loop to assigne address of String Array in 1D pointer array 
	{
		for (int j = 0; j < col; j++)
		{
			*(*(p + i) + j) = (char*)malloc(sizeof(char));
		}
	}

	printf("Enter array Elements...\n");

	for (int i = 0; i < row; i++) // For loop to take input array elements.
	{
		for (int j = 0; j < col; j++)
		{
			int k = 0;
			int no_of_char = 1; // Declaration of variables.
			char ch;
		
			*(*(*(p + i) + j) + k) = '\0'; // String terminating character is added at position 0 of array..

			// Logic to take input in array using DMA.
			
			do
			{
				scanf_s("%c", &ch);
				if ((no_of_char == 1) && ch == '\n') {
					scanf_s("%c", &ch);
				}
				if (ch != '\n') {
					no_of_char++;
					*(*(p + i) + j) = (char*)realloc(*(*(p + i) + j), no_of_char * sizeof(char)); // reallocate memory to new character.
					//p = (char*)realloc(p, no_of_char * sizeof(char)); 
					*(*(*(p + i) + j) + k) = ch;
					*(*(*(p + i) + j) + k + 1) = '\0';
					k++;
				}

			} while (ch != '\n');
		}
	}

	printf("Array Elements are: \n");
	for (int i = 0; i < row; i++) // For loop to print array elements.
	{
		for (int j = 0; j < col; j++)
		{
			int k = 0;
			while (*(*(*(p + i) + j) + k) != '\0') // While loop to print array..
			{
				printf("%c", *(*(*(p + i) + j) + k));
				k++;
			}
			printf("\t");
		}
		printf("\n");
	}


	free(p); // Free the memory which is given to pointer p Dynamically...
}


