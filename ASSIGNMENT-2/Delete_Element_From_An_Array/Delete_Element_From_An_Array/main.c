/*

Que : 11. Write a program in C to delete an element at desired position from an array.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {

	int arr[100], n, position; // Declaration of Required Variables

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

	printf("\nEnter the position of array element which you want to delete: ");
	scanf_s("%d", &position); // Take input position to delete an array element.

	// Logic to delete an element from an array at desired position.
	for (int i = position; i < n; i++)
	{
		arr[i] = arr[i + 1];
	}


	printf("Array Elements after deleting an position %d element from array: ", position);
	for (int i = 0; i < n - 1; i++) // For loop to print array elements.
	{
		printf("%d ", arr[i]);
	}


}