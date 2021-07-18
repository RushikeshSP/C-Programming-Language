/*

Que : 22. Write C Program to Find Union & Intersection of 2 Arrays
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {

	int arr1[100], arr2[100], n1, n2, arr_union[100], arr_intersection[100], n3; // Declaration of required variables

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

	// Logic to get the union of two arrays.
	printf("\nThe Union of Array1 and Array2 is: ");
	int i = 0, j = 0;
	while (i < n1 && j < n2) {
		if (arr1[i] < arr2[j])
			printf("%d ", arr1[i++]);
		else if (arr2[j] < arr1[i])
			printf("%d ", arr2[j++]);
		else {
			printf("%d ", arr2[j++]);
			i++;
		}
	}
	//Print remaining elements of the larger array 
	while (i < n1)
		printf("%d ", arr1[i++]);
	while (j < n2)
		printf("%d ", arr2[j++]);


	// Logic to get the intersection of two arrays
	printf("\nThe Intersection of Array1 and Array2 is: ");
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			if (arr1[i] == arr2[j]) {
				printf("%d ", arr1[i]);
			}
		}
	}
}