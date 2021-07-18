/*

Que : 1. Write a C program to to represent 1-D array using Dynamic Memory Allocation.
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

	if (p != NULL) {
		printf("Inside NULL...");
	}

	printf("Array Elements are: ");
	for (int i = 0; i < n; i++) // For loop to print array elements.
	{
		printf("%d ", *(p + i));
	}

	printf("\nEnter a Searching Element: ");
	scanf_s("%d", &search); // Enter a Searching element to search in array.

	for (int i = 0; i < n; i++) // For loop to search element in array.
	{
		if (search == *(p + i))
		{
			flag = 1;
			break;
		}
	}

	if (flag == 1) {
		printf("Element Found..");
	}
	else {
		printf("Element Not Found..");
	}

	void free(p); // Free the memory which is given to pointer p Dynamically...
}