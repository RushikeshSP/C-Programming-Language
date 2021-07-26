/*

Que : 30. Write a C Program to Print the Alternate Elements in an Array (Using Dynamic Memory Allocation)
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.
#include<stdlib.h>

void main() {

	int n; // Declaration of variables.

	int* p = NULL; // Initializing pointer to null value.

	printf("Enter How Many Elements Do You Want In Array : ");
	scanf_s("%d", &n); // Taking input - Number of elements in array.

	p = (int*)malloc(n * sizeof(int)); // Syntax for Dynamic memory allociation of array

	printf("Enter Array Elements..\n");
	for (int i = 0; i < n; i++) // For loop to take input array elements.
	{
		scanf_s("%d", p + i);
	}

	// Logic to find array elements whose difference is largest.
	int max = *(p + 0); // Conside maximum value is first element of array.

	// Logic to get maximum element of array..
	for (int i = 0; i < n; i++)
	{
		if (*(p + i) > max) {
			max = *(p + i);
		}
	}
	int min = *(p + 0); // Conside minimum value is first element of array.

	// Logic to get minimum element of array..
	for (int i = 0; i < n; i++)
	{
		if (*(p + i) < min) {
			min = *(p + i);
		}
	}

	printf("\nThe two elements from array whose difference is largest are: %d and %d", min, max);

	free(p); // To free the memory given to array p dynamically..
}
