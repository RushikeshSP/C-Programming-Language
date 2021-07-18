/*

Que : 2. An array consist of Integers. Write a C program to count the number of elements less than, greater than and equal to zero.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {
	int arr[100], n, P_Count = 0, N_Count = 0, Z_Count = 0; // Initialize required variables

	printf("How many elements do you want in array? \n");
	scanf_s("%d", &n); // Take input - Number of array elements.

	printf("Enter array Elements\n");

	for (int i = 0; i < n; i++) // For loop to take input array elements.
	{
		scanf_s("%d", &arr[i]);
	}

	printf("Array Elements are: ");

	for (int i = 0; i < n; i++) // For loop to print array elements.
	{
		printf("%d ", arr[i]);
	}

	// Logic to find sum of all the elements of an array
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0) {
			P_Count++;
		}
		else if (arr[i] < 0) {
			N_Count++;
		}
		else {
			Z_Count++;
		}
	}

	printf("\nNumber of elements less than zero are: %d", N_Count);
	printf("\nNumber of elements equal to zero are: %d", Z_Count);
	printf("\nNumber of elements greater than zero are: %d", P_Count);

}