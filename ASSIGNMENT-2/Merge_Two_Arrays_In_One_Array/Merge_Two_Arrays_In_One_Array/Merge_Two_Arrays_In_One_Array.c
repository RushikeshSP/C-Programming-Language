/*

Que : Write a C program to merge two arrays in one array.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {

	int arr1[100], arr2[100], n1, n2, merge_arr[200], n3; // Declaration of required variables

	printf("How many Elements do you want in array1?\n");
	scanf_s("%d", &n1); // Take input - Number of array elements in array1

	printf("Enter Array1 Elements: \n");
	for (int i = 0; i < n1; i++) // For loop to take input array elements of array1.
	{
		scanf_s("%d", &arr1[i]);
	}

	printf("Array1 Elements are: ");
	for (int i = 0; i < n1; i++) // For loop to print array elements of array1
	{
		printf("%d ", arr1[i]);
	}

	printf("\nHow many Elements do you want in array2?\n");
	scanf_s("%d", &n2); // Take input - Number of array elements in array2.

	printf("Enter Array2 Elements: \n");
	for (int i = 0; i < n2; i++) // For loop to take input array elements of array2.
	{
		scanf_s("%d", &arr2[i]);
	}

	printf("Array2 Elements are: ");
	for (int i = 0; i < n2; i++) // For loop to print array elements of array2.
	{
		printf("%d ", arr2[i]);
	}

	// Logic to get merge of two arrays...
	n3 = n1 + n2;
	int num  = 0;

	for (int i = 0; i < n1; i++) // For loop to add first array elements in final array...
	{
		merge_arr[i] = arr1[i];
		num++;
	}
	for (int i = 0; i < n2; i++) // For loop to add second array elements in final array...
	{
		merge_arr[num] = arr2[i];
		num++;
	}

	printf("\nMerge Array: ");
	for (int i = 0; i < n3; i++) // For loop to print merged array..
	{
		printf("%d ", merge_arr[i]);
	}
	printf("\n");
}