/*

Que : 4. Write a C program to add two matrices in third Matrix(Using Static Memory Allocation).
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {
	int arr1[20][20], arr2[20][20], add[20][20], row, col; // Initialize required variables

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

	// Logic for addition of two matrices...
	printf("The addition of given two matrices is:\n");
	for (int i = 0; i < row; i++) // For loop to add two matrices..
	{
		for (int j = 0; j < col; j++)
		{
			add[i][j] = arr1[i][j] + arr2[i][j];
		}
	}

	for (int i = 0; i < row; i++) // For loop to print addition matrix.
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d\t", add[i][j]);
		}
		printf("\n");
	}

}