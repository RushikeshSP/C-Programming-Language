/*

Que : 1.Write C Program to read and print a Matrix , R and C must be input by User. (Using Dynamic Memory Allocation).
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.
#include<stdlib.h>

void main() {
	int row, col; // Defination of required variables

	printf("Enter Number Of Rows:");
	scanf_s("%d", &row); // Take input - Number of array elements in row.

	printf("Enter Number of Columns:");
	scanf_s("%d", &col); // Take input - Number of array elements in columns.

	int** p = NULL; // Defination of pointer array..

	p = (int**)malloc(row * sizeof(int*)); // Allocating memory to 2D pointer p dynamically...

	for (int i = 0; i < col; i++) // For loop to assigne address of 1D array in 2D pointer array 
	{
		*(p + i) = (int*)malloc(col * sizeof(int));
	}

	printf("Enter array Elements...\n");

	for (int i = 0; i < row; i++) // For loop to take input array elements.
	{
		for (int j = 0; j < col; j++)
		{
			scanf_s("%d", *(p + i) + j);
		}
	}

	printf("Array Elements are: \n");
	for (int i = 0; i < row; i++) // For loop to print array elements.
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d\t", *(*(p + i) + j));
		}
		printf("\n");
	}
}