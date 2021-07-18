/*

Que : 5. Write a C program to substract two matrices in third Matrix(Using Dynamic Memory Allocation).
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

	// Array 1 creation logic..
	int** p = NULL; // Defination of pointer array..
	p = (int**)malloc(row * sizeof(int*)); // Allocating memory to 2D pointer p dynamically...
	for (int i = 0; i < col; i++) // For loop to assigne address of 1D array in 2D pointer array 
	{
		*(p + i) = (int*)malloc(col * sizeof(int));
	}

	// Array 2 creation logic..
	int** q = NULL; // Defination of pointer array..
	q = (int**)malloc(row * sizeof(int*)); // Allocating memory to 2D pointer q dynamically...
	for (int i = 0; i < col; i++) // For loop to assigne address of 1D array in 2D pointer array 
	{
		*(q + i) = (int*)malloc(col * sizeof(int));
	}

	// Array 3 for storing the result of substraction of array 1 and 2 ...
	int** r = NULL; // Defination of pointer array..
	r = (int**)malloc(row * sizeof(int*)); // Allocating memory to 2D pointer r dynamically...
	for (int i = 0; i < col; i++) // For loop to assigne address of 1D array in 2D pointer array 
	{
		*(r + i) = (int*)malloc(col * sizeof(int));
	}


	printf("Enter array Elements of first matrix...\n");
	for (int i = 0; i < row; i++) // For loop to take input array elements.
	{
		for (int j = 0; j < col; j++)
		{
			scanf_s("%d", *(p + i) + j);
		}
	}

	printf("Enter array Elements of second matrix...\n");
	for (int i = 0; i < row; i++) // For loop to take input array elements.
	{
		for (int j = 0; j < col; j++)
		{
			scanf_s("%d", *(q + i) + j);
		}
	}

	printf("First array is: \n");
	for (int i = 0; i < row; i++) // For loop to print array elements.
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d\t", *(*(p + i) + j));
		}
		printf("\n");
	}

	printf("Second array is: \n");
	for (int i = 0; i < row; i++) // For loop to print array elements.
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d\t", *(*(q + i) + j));
		}
		printf("\n");
	}

	// Logic for Substraction of two matrices...
	printf("The substraction of given two matrices is:\n");
	for (int i = 0; i < row; i++) // For loop to add two matrices..
	{
		for (int j = 0; j < col; j++)
		{
			*(*(r + i) + j) = *(*(p + i) + j) - *(*(q + i) + j);
		}
	}

	for (int i = 0; i < row; i++) // For loop to print substraction matrix.
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d\t", *(*(r + i) + j));
		}
		printf("\n");
	}

}