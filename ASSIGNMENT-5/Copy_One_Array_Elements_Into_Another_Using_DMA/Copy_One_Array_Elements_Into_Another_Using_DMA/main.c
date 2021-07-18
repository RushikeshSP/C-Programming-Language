/*

Que : 8. Write a C program to copy the elements of one array into another array. (Using Dynamic Memory Allocation)
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.
//#include<stdlib.h>

void main() {
	int n; // Declaration of variables.

	int* p = NULL; // Initializing pointer to null value.

	printf("Enter How Many Elements Do You Want In Array(Array1) : ");
	scanf_s("%d", &n); // Taking input - Number of elements in array.

	p = (int*)malloc(n * sizeof(int)); // Syntax for Dynamic memory allociation of array.

	printf("Enter Array Elements..\n");
	for (int i = 0; i < n; i++) // For loop to take input array elements.
	{
		scanf_s("%d", p + i);
	}

	printf("Array(Array1) Elements are: ");
	for (int i = 0; i < n; i++) // For loop to print array elements.
	{
		printf("%d ", *(p + i));
	}

	int* q = NULL; // Initializing pointer to null value.
	q = (int*)malloc(n * sizeof(int)); // Given memory to second array dynamically..

	for (int i = 0; i < n; i++) // For loop to copy array elements.
	{
		*(q + i) = *(p + i);
	}

	printf("\nThe resultant array(array2) is: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", *(p + i));
	}

}