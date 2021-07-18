/*

Que : 19. Write a program in C to delete an element at desired position from an array. (Using Dynamic Memory Allocation)
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

	int flag = 0, position;

	printf("\nEnter the position of array element which you want to delete: ");
	scanf_s("%d", &position); // Take input position to delete an array element.

	// Logic to delete an element from an array at desired position.
	int temp = *(p + n - 1);
	p = (int*)realloc(p, (n - 1) * sizeof(int));

	for (int i = position; i < n; i++)
	{
		*(p + i) = *(p + i + 1);
		flag = 1;
	}
	if (flag == 1) {
		*(p + n - 2) = temp;
	}

	printf("Array Elements after deleting an position %d element from array: ", position);
	for (int i = 0; i < n - 1; i++) // For loop to print array elements.
	{
		printf("%d ", *(p + i));
	}


	free(p); // To free the memory given to array p dynamically..
}
