/*

Que : 5. Write a C program to reverse an given 1-D without using sorting algorithms. (Use Dynamic Memory Allocation to represent an array).
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

	printf("\nThe Reversed Array is: ");

	// Logic to reverse the array elements..
	int i = 0, j = n-1;
	while (i <= j) {
		int temp = *(p + i);
		*(p + i) = *(p + j);
		*(p + j) = temp;
		i++, j--;
	}

	for (int i = 0; i < n; i++) // For loop to print array elements.
	{
		printf("%d ", *(p + i));
	}

	free(p); // Free the memory which is given to pointer p Dynamically...
}