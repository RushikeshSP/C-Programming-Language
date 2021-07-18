/*

Que : 15. Write a program in C to print all unique elements in an array. (Using Dynamic Memory Allocation)
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.
//#include<stdlib.h>

void main() {

	int n; // Declaration of variables.

	int* p = NULL; // Initializing pointer to null value.

	int* freq = NULL; // Initializing pointer to null value.

	printf("Enter How Many Elements Do You Want In Array : ");
	scanf_s("%d", &n); // Taking input - Number of elements in array.

	p = (int*)malloc(n * sizeof(int)); // Syntax for Dynamic memory allociation of array

	freq = (int*)malloc(n * sizeof(int)); // Syntax for Dynamic memory allociation of array.

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

	// Logic to find frequency count of each element of an array.
	for (int i = 0; i < n; i++)
	{
		int count = 1;
		for (int j = i + 1; j < n; j++)
		{
			if (*(p + i) == *(p + j)) {
				count++;
				*(freq + j) = -1;
			}
		}
		if (*(freq + i) != -1) {
			*(freq + i) = count;
		}

	}

	printf("\nAll Unique elements in an array are: ");

	for (int i = 0; i < n; i++) // For loop to print array elements.
	{
		if (*(freq + i) == 1) // Condition to check unique element in frequency array.
		{
			printf("%d ", *(p + i));
		}
	}

	free(p); // To free the memory given to array p dynamically..
}