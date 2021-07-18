/*

Que : 1.Write C Program to read and print a Matrix , R and C must be input by User. (Using Static Memory Allocation).
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {
	int a[20][20], row, col; // Initialize required variables

	printf("Enter Number Of rows:");
	scanf_s("%d", &row); // Take input - Number of array elements in row.

	printf("Enter Number of columns:");
	scanf_s("%d", &col); // Take input - Number of array elements in columns.

	printf("Enter array Elements...\n");

	for (int i = 0; i < row; i++) // For loop to take input array elements.
	{
		for (int j = 0; j < col; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}

	printf("Array Elements are: \n");
	for (int i = 0; i < row; i++) // For loop to print array elements.
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}