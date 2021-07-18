/*

Que : 19. Write a C program to store squares of the elements in the same array
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {
	int arr[100], n; // Decleration of required variables

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

	for (int i = 0; i < n; i++) // For loop to get squares of array elements.
	{
		arr[i] = arr[i] * arr[i];
	}

	printf("\nThe Squares of array Elements are: ");

	for (int i = 0; i < n; i++) // For loop to print array elements.
	{
		printf("%d ", arr[i]);
	}

}