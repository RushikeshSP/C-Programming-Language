/*

Que : 13. Write a program in C to separate odd and even integers in same array. (Using Dynamic Memory Allocation)
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

	// Logic to seperate odd and even integers in an array
	for (int i = 0; i < n - 1; i++)
	{
		if (*(p + i) % 2 == 0)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (*(p + j) % 2 != 0)
				{
					int temp = *(p + i);
					*(p + i) = *(p + j);
					*(p + j) = temp;
					break;
				}
			}
		}

	}

	printf("\nThe seperate odd and even integers in given array are: ");
	for (int i = 0; i < n; i++) // For loop to print array elements.
	{
		printf("%d ", *(p + i));
	}
}