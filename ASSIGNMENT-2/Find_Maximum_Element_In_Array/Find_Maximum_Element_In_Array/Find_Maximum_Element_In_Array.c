/*

Que : 12a. Write a program in C to find the maximum / minimum element in an array.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {

	int arr[100], n, max; // Initialize required variables.

	printf("How many Elements do you want in array?\n");
	scanf_s("%d", &n); // Take Input - Number of array elements

	printf("Enter Array Elements: \n");
	for (int i = 0; i < n; i++) // For loop to take input array elements
	{
		scanf_s("%d", &arr[i]);
	}

	printf("Array Elements are: ");

	max = arr[0]; // Conside maximum value is first element of array.

	// Logic to get maximum element of array..
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);

		if (arr[i] > max) {
			max = arr[i];
		}
	}

	printf("\nThe Maximum Element In Given Array is: %d \n", max);

}