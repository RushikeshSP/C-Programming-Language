/*

Que : 10. Write a program in C to insert New value in the array (sorted list ).
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {

	int arr[100], n, num; // Declaration of Required Variables

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

	// Logic to sort array in ascending order.
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	printf("\nEnter a number to insert in array: ");
	scanf_s("%d", &num); // Take input number to insert in array.

	// Logic to insert new element in an array.
	int position = n;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > num) 
		{
			position = i;
			break;
		}
	}

	for (int i = n; i >= position; i--) // For loop for shifting of elements
	{
		arr[i + 1] = arr[i];
	}
	arr[position] = num;

	printf("Array Elements after inserting new element in array: ");
	for (int i = 0; i < n+1; i++) // For loop to print array elements.
	{
		printf("%d ", arr[i]);
	}


}