/*

Que : 4. Write a C program to sort first half of array in ascending order and second half of array in descending order.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {
	int arr[100], n, mid; // Decleration of required variables

	printf("How many elements do you want in array? \n");
	scanf_s("%d", &n); // Take input - Number of array elements.

	mid = n / 2; // Divide given array in two halfs.

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

	// Logic to sort array in ascending order
	for (int i = 0; i < mid; i++)
	{
		for (int j = i + 1; j < mid; j++)
		{
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	// Logic to sort array in descending order
	for (int i = mid; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] < arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	printf("\nResultant array is: ");

	for (int i = 0; i < n; i++) // For loop to print array elements.
	{
		printf("%d ", arr[i]);
	}
}