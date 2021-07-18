/*

Que : 10. Write C program to check if the matrix is symmetric or not (Using Static Memory Allocation).
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {
	int arr[20][20], row, col; // Initialize required variables

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


	// Logic to check given matrix is Symmitric matrix or not..
	int flag = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] != arr[j][i]) {
				flag = 1;
				break;
			}
		}
		if (flag == 1) {
			break;
		}
	}
	if (flag == 1) {
		printf("The given matrix is not an symmitric matrix");
	}
	else {
		printf("The given matrix is an symmitric matrix");
	}
}