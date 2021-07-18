/*

Que : 5. Write a C program to subtract two matrices in third matrix (Using Static memory Allocation).
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {
	int arr1[20][20], arr2[20][20], sub[20][20], row, col; // Initialize required variables

	printf("Enter Number Of Rows:");
	scanf_s("%d", &row); // Take input - Number of array elements in row.

	printf("Enter Number Of Columns:");
	scanf_s("%d", &col); // Take input - Number of array elements in columns.

	printf("Enter array Elements of first matrix...\n");
	for (int i = 0; i < row; i++) // For loop to take input array elements.
	{
		for (int j = 0; j < col; j++)
		{
			scanf_s("%d", &arr1[i][j]);
		}
	}

	printf("Enter array Elements of second matrix...\n");
	for (int i = 0; i < row; i++) // For loop to take input array elements.
	{
		for (int j = 0; j < col; j++)
		{
			scanf_s("%d", &arr2[i][j]);
		}
	}

	printf("First array is: \n");
	for (int i = 0; i < row; i++) // For loop to print array elements.
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d\t", arr1[i][j]);
		}
		printf("\n");
	}

	printf("Second array is: \n");
	for (int i = 0; i < row; i++) // For loop to print array elements.
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d\t", arr2[i][j]);
		}
		printf("\n");
	}

	// Logic for Substraction of two matrices...
	printf("The addition of given two matrices is:\n");
	for (int i = 0; i < row; i++) // For loop to substract two matrices..
	{
		for (int j = 0; j < col; j++)
		{
			sub[i][j] = arr1[i][j] - arr2[i][j];
		}
	}

	for (int i = 0; i < row; i++) // For loop to print substraction matrix.
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d\t", sub[i][j]);
		}
		printf("\n");
	}

}