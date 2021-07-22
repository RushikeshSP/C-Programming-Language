/*

Que : 24. Write a program in C to find the second largest element in an array. (Using Dynamic Memory Allocation)
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

	int high = *(p + 0); // Consider highest element is first element of array

	// Logic to find highest element of array
	for (int i = 0; i < n; i++)
	{
		printf("%d ", *(p + i));

		if (*(p + i) > high) {
			high = *(p + i);
		}
	}
	printf("\n");

	int sec_high = *(p + 0); // Consider second highest element is first element of array

	// Logic to find second highest element of array...
	for (int i = 0; i < n; i++)
	{
		if (*(p + i) == high)
		{
			continue;
		}
		else if (*(p + i) > sec_high)
		{
			sec_high = *(p + i);
		}
	}

	printf("The Second Highest Element In Given Array is: %d \n", sec_high);


	free(p); // To free the memory given to array p dynamically..
}
