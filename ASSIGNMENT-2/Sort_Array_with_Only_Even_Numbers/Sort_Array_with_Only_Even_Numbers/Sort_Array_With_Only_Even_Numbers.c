/*

Que : 6. Write a C program to sort only even numbers in given array.
		Eg.
			Input: 45 8 75 29 5 49 56 22 14 497 288 18 2
			Output: 45 2 75 29 5 49 8 14 18 497 22 56 288
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {

	int arr[100], n, min; // Declaration of Required Variables

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

	printf("\nSorted Array In Ascending Order Of Only Even Numbers: ");


	// Logic for sorting of array of even elements
	for (int i = 0; i < n; i++)
	{
		if (arr[i]%2 == 0)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (arr[j]%2 == 0)
				{
					if (arr[i] > arr[j]) {
						int temp = arr[i];
						arr[i] = arr[j];
						arr[j] = temp;
					}
				}
			}
		}
	}

	for (int i = 0; i < n; i++) // Print sorted array...
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}