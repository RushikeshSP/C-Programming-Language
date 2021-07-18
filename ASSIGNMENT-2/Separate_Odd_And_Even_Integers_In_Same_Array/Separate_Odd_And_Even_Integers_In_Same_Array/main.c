/*

Que : 7. Write a program in C to separate odd and even integers in same array.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {

	int arr[100], n; // Declaration of Required Variables

	printf("How many Elements do you want in array?\n");
	scanf_s("%d", &n); // Take Input - Number of array elements.

	printf("Enter Array Elements: \n");
	for (int i = 0; i < n; i++) // For loop to take input array elements.
	{
		scanf_s("%d", &arr[i]);
	}

	printf("Array Elements are: ");

	for (int i = 0; i < n; i++) // For loop to print array elements.
	{
		printf("%d ", arr[i]);
	}

	// Logic to seperate odd and even integers in an array
	for (int i = 0; i < n-1; i++)
	{
		if (arr[i] % 2 == 0)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (arr[j] % 2 != 0)
				{
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
					break;
				}
			}
		}
		
	}

	printf("\nThe seperate odd and even integers in given array are: ");
	for (int i = 0; i < n; i++) // For loop to print array elements.
	{
		printf("%d ", arr[i]);
	}
}