/*

Que : 12b. Write a program in C to find the maximum / minimum element in an array.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {

	int arr[100], n, min; // Declaration of required variables

	printf("How many Elements do you want in array?\n");
	scanf_s("%d", &n); // Take input - Number of array elements

	printf("Enter Array Elements: \n");
	for (int i = 0; i < n; i++) // for loop to take input array elements
	{
		scanf_s("%d", &arr[i]);
	}

	printf("Array Elements are: ");

	min = arr[0]; // Consider minimum element is first element of array..

	// Logic to find minimum element of array...
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);

		if (arr[i] < min) {
			min = arr[i];
		}
	}

	printf("\nThe Minimum Element In Given Array is: %d \n", min);

}