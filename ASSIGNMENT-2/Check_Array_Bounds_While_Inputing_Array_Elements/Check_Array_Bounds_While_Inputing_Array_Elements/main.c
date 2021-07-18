/*

Que : 15. Write a C Program to Check Array bounds while Inputing Elements into the Array
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {

	int arr[10], n; // Declaration of Required Variables

	printf("How many Elements do you want in array?\n");
	scanf_s("%d", &n); // Take Input - Number of array elements.

	int no_of_elements = sizeof(arr) / sizeof(int);

	printf("Enter Array Elements: \n");
	for (int i = 0; i < n; i++) // For loop to take input array elements.
	{
		if (i >= no_of_elements) // Condition to check array bounds...
		{
			printf("Error: Array Elements Out Of Bound...\n");
			//break;
			exit(0);
		}
		scanf_s("%d", &arr[i]);
	}

	printf("Array Elements are: ");

	for (int i = 0; i < n; i++) // For loop to print array elements.
	{
		printf("%d ", arr[i]);
	}


}