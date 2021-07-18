/*

Que : 11. Write a C program to sort only even numbers in given array. (Using Dynamic Memory Allocation)
			Eg.
				Input: 45 8 75 29 5 49 56 22 14 497 288 18 2
				Output: 45 2 75 29 5 49 8 14 18 497 22 56 288
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.
//#include<stdlib.h>

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

	printf("\nSorted Array In Ascending Order Of Only Even Numbers: ");


	// Logic for sorting of array of even elements
	for (int i = 0; i < n; i++)
	{
		if (*(p + i) % 2 == 0)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (*(p + j) % 2 == 0)
				{
					if (*(p + i) > *(p + j)) {
						int temp = *(p + i);
						*(p + i) = *(p + j);
						*(p + j) = temp;
					}
				}
			}
		}
	}

	for (int i = 0; i < n; i++) // Print sorted array...
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
}