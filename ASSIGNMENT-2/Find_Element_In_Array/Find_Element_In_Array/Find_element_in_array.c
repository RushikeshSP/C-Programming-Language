/*

Que : Write a C program to find Element in array.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {
	int a[100], n, num, flag = 0; // Initialize required variables

	printf("How many elements do you want in array? \n");
	scanf_s("%d", &n); // Take input - Number of array elements.

	printf("\nEnter array Elements\n");

	for (int i = 0; i < n; i++) // For loop to take input array elements.
	{
		scanf_s("%d\n", &a[i]);
	}

	printf("Array Elements are: \n");

	for (int i = 0; i < n; i++) // For loop to print array elements.
	{
		printf("%d\n", a[i]);
	}

	printf("Enter a numer to search in array\n");
	scanf_s("%d", &num); // Take a input number to search in array.

	// Logic to search number in array.
	for (int i = 0; i < n; i++) 
	{
		if (num == a[i]) {
			printf("\nElement found..");
			flag = 1;
			break;
		}
	}

	if (flag == 0) {
		printf("Element not found...");
	}
}