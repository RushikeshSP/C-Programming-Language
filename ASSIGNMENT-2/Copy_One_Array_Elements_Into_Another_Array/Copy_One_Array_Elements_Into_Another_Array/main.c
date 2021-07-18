/*

Que : 5. Write a C program to copy the elements of one array into another array.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {
	int arr1[100], arr2[100], n; // Decleration of required variables

	printf("How many elements do you want in array(array1)? \n");
	scanf_s("%d", &n); // Take input - Number of array elements.

	printf("Enter array Elements:\n");

	for (int i = 0; i < n; i++) // For loop to take input array elements.
	{
		scanf_s("%d", &arr1[i]);
	}

	for (int i = 0; i < n; i++) // For loop to copy array elements.
	{
		arr2[i] = arr1[i];
		//printf("%d ", arr1[i]);
	}

	printf("\nThe resultant array(array2) is: ");
	for (int i = 0; i < n; i++) 
	{
		printf("%d ", arr2[i]);
	}

}