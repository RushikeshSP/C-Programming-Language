/*

Que : 1. Write a C program to find the sum of all the elements of an array.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {
	int arr[100], n, sum = 0; // Initialize required variables

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

	printf("\nThe sum of all the elements of an array is: ");

	// Logic to find sum of all the elements of an array
	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}

	printf("%d\n", sum);
}