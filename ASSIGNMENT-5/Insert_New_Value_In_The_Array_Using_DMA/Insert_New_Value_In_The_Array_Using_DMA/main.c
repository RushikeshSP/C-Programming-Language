/*

Que : 17. Write a program in C to insert New value in the array (sorted list ). (Using Dynamic Memory Allocation)
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

	printf("\nSorted Array In Ascending Order: ");

	// Logic to sort array in ascending order.
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (*(p + i) > *(p + j)) {
				int temp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = temp;
			}
		}
	}

	for (int i = 0; i < n; i++) // For loop to print sorted array..
	{
		printf("%d ", *(p + i));
	}

	int num;
	printf("\nEnter a value to inseart in an array: ");
	scanf_s("%d", &num);


	// Logic to insert new element in an array.
	int position = n;
	for (int i = 0; i < n; i++)
	{
		if (*(p + i) > num)
		{
			position = i;
			break;
		}
	}
	p = (int*)realloc(p, (n + 1) * sizeof(int)); // reallocate memory to new character.
	for (int i = n; i >= position; i--) // For loop for shifting of elements
	{
		*(p + i + 1) = *(p + i);
	}
	*(p + position) = num;
	printf("Array Elements after inserting new element in array: ");
	for (int i = 0; i < n+1; i++) // For loop to print array elements.
	{
		printf("%d ", *(p + i));
	}

	free(p); // To free the memory given to array p dynamically..
}
