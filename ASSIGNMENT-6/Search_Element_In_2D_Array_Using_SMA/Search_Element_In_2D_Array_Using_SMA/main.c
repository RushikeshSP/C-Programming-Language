/*

Que : 2.Write a C Program to Search Element in a 2D Array (Using Static Memory Allocation).
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {
	int arr[100][100], row, col; // Initialize required variables

	printf("Enter Number Of rows:");
	scanf_s("%d", &row); // Take input - Number of array elements in row.

	printf("Enter Number of columns:");
	scanf_s("%d", &col); // Take input - Number of array elements in columns.

	printf("Enter array Elements...\n");

	for (int i = 0; i < row; i++) // For loop to take input array elements.
	{
		for (int j = 0; j < col; j++)
		{
			scanf_s("%d", &arr[i][j]);
		}
	}

	printf("Array Elements are: \n");
	for (int i = 0; i < row; i++) // For loop to print array elements.
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}

	// Logic to search Element in 2D array using SMA.
	int search, flag = 0;
	printf("Enter the Search Element: ");
	scanf_s("%d", &search);

	for (int i = 0; i < row; i++) // For loop to search element in array.
	{
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] == search) // If element found then break the loop..
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1) // If element found then break the loop..
		{
			break;
		}
	}
	if (flag == 1) {
		printf("The given element %d is Present in array..", search);
	}
	else {
		printf("The given element %d is Not Present in array..", search);
	}
}