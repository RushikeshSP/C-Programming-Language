/*

Que : 22. Write a program in C to find the maximum / minimum element in an array. (Using Dynamic Memory Allocation)
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

	printf("Array Elements are: ");
	for (int i = 0; i < n; i++) // For loop to print array elements.
	{
		printf("%d ", *(p + i));
	}
	printf("\n");

	// Logic to get maximum element of array..
	int max = *(p + 0); // Consider the maximum element of array is at position 0.

	for (int i = 0; i < n; i++) // For loop to find the maximum of array elements.
	{
		if (*(p + i) > max) {
			max = *(p + i);
		}
	}
	printf("The Maximum Element In Given Array is: %d \n", max);

	// Logic to get minimum element of array..
	int min = *(p + 0); // Consider the minimum element of array is at position 0.

	for (int i = 0; i < n; i++) // For loop to find the minimum of array elements.
	{
		if (*(p + i) < min) {
			min = *(p + i);
		}
	}
	printf("The Minimum Element In Given Array is: %d \n", min);


	free(p); // To free the memory given to array p dynamically..
}
