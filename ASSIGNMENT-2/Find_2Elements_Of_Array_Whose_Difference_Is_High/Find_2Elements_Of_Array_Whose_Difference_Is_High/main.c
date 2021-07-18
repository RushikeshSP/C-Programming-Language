/*

Que : 17. Write a C Program to Find 2 Elements in the Array such that Difference between them is Largest
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {

	int arr[100], n, max, min; // Declaration of Required Variables

	printf("How many Elements do you want in array?\n");
	scanf_s("%d", &n); // Take Input - Number of array elements.

	printf("Enter Array Elements: \n");
	for (int i = 0; i < n; i++) // For loop to take input array elements.
	{
		scanf_s("%d", &arr[i]);
	}

	printf("Array Elements are: ");

	for (int i = 0; i < n; i++) // For loop to print array elements.
	{
		printf("%d ", arr[i]);
	}

	max = arr[0]; // Conside maximum value is first element of array.

	// Logic to get maximum element of array..
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	min = arr[0]; // Conside minimum value is first element of array.

	// Logic to get minimum element of array..
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) {
			min = arr[i];
		}
	}

	printf("\nThe two elements from array whose difference is largest are: %d and %d", min, max);
}