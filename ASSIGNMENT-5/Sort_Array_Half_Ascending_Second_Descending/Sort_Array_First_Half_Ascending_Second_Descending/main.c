/*

Que : 5. Write a C program to sort first half of array in ascending order and second half of array in descending order. (Using Dynamic Memory Allocation)
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {

	int n; // Declaration of variables.

	int* p = NULL; // Initializing pointer to null value.

	printf("Enter How Many Elements Do You Want In Array : ");
	scanf_s("%d", &n); // Taking input - Number of elements in array.

	int mid = n / 2; // Divide given array in two halfs.

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

	// Logic to sort array in ascending order
	for (int i = 0; i < mid; i++)
	{
		for (int j = i + 1; j < mid; j++)
		{
			if (*(p + i) > *(p + j)) {
				int temp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = temp;
			}
		}
	}

	// Logic to sort array in descending order
	for (int i = mid; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (*(p + i) < *(p + j)) {
				int temp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = temp;
			}
		}
	}

	printf("\nResultant array is: ");

	for (int i = 0; i < n; i++) // For loop to print array elements.
	{
		printf("%d ", *(p + i));
	}

	free(p); // Used to free the memory given to the pointer array p.

}