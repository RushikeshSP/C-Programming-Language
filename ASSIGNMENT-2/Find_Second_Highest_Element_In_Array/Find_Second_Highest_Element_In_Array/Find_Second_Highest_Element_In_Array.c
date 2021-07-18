/*

Que : 13. Write a program in C to find the second largest element in an array.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {

	int arr[100], n, high, sec_high; // Declaration of required variables.

	printf("How many Elements do you want in array?\n");
	scanf_s("%d", &n); //Take Input - Number of array elements

	printf("Enter Array Elements: \n");
	for (int i = 0; i < n; i++) // For loop to take input array elements
	{
		scanf_s("%d", &arr[i]);
	}

	printf("Array Elements are: ");

	high = arr[0]; // Consider highest element is first element of array

	// Logic to find highest element of array
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);

		if (arr[i] > high) {
			high = arr[i];
		}
	}

	sec_high = arr[0]; // Consider second highest element is first element of array

	// Logic to find second highest element of array...
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == high) 
		{
			continue;
		}
		else if (arr[i] > sec_high) 
		{
			sec_high = arr[i];
		}
	}

	printf("\nThe Second Highest Element In Given Array is: %d \n", sec_high);

}