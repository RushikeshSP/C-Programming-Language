/*

Que : 4. Write a C program to find second highest element in given 1-D array using Dynamic Memory Allocation.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> // Include necessary header files
#include<stdlib.h>


void main() {

	int n, search, flag = 0; // Declaration of variables.

	int* p = NULL; // Initializing pointer to null value.

	printf("Enter How Many Elements Do You Want In Array : ");
	scanf_s("%d", &n); // Taking input - Number of elements in array.

	p = (int*)malloc(n * sizeof(int)); // Syntax for Dynamic memory allociation of array.

	printf("Enter Array Elements..\n");
	for (int i = 0; i < n; i++) // For loop to take input array elements.
	{
		scanf_s("%d", p + i);
	}

	printf("Array Elements are: ");
	for (int i = 0; i < n; i++) // For loop to print array elements.
	{
		printf("%d ", *(p + i));
	}

	// Logic to Find Second Highest Element in given array...
	int high = *(p + 0);
	int second_high = *(p + 0);

	for (int i = 0; i < n; i++)
	{
		if (*(p + i) > high) {
			high = *(p + i);
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (*(p + i) == high) {
			continue;
		}
		else if (*(p + i) > second_high) {
			second_high = *(p + i);
		}
	}

	printf("\nThe Second Highest Element In Given Array Is: %d", second_high);

	free(p); // Free the memory which is given to pointer p Dynamically...
}