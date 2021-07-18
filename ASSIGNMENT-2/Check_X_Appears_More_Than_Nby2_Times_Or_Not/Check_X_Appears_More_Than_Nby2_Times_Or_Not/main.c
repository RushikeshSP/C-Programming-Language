/*

Que : 21. Write C Program to Find if a given Integer X appears more than N/2 times in a Sorted Array of N Integers
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

	printf("Array Elements are: ");

	for (int i = 0; i < n; i++) // For loop to print array elements.
	{
		printf("%d ", arr[i]);
	}

	printf("\nEnter a number to check: ");
	scanf_s("%d", &num); // Take input number to check if it occures more than n/2 times or not.

	int count = 0;

	for (int i = 0; i < n; i++) // For loop to get the count of number 
	{
		if (arr[i] == num) {
			count++;
		}
	}

	if (count >= n / 2)
	{
		printf("Integer %d appears more than N/2 times in a given Sorted Array.", num);
	}
	else {
		printf("Integer %d not appears more than N/2 times in a given Sorted Array.", num);
	}
}