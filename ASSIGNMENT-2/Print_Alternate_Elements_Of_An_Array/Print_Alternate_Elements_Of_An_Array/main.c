/*

Que : 16. Write a C Program to Print the Alternate Elements in an Array
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {
	int arr[100], n; // Declaration of Required Variables

	printf("How many Elements do you want in array?\n");
	scanf_s("%d", &n); // Take Input - Number of array elements.

	printf("Enter Array Elements: \n");
	for (int i = 0; i < n; i++) // For loop to take input array elements.
	{
		scanf_s("%d", &arr[i]);
	}

	printf("Alternate Array Elements are: ");

	for (int i = 0; i < n; i = i+2) // For loop to print array elements.
	{
		printf("%d ", arr[i]);
	}

}