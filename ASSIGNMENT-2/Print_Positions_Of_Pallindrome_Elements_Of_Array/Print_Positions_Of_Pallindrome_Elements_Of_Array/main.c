/*

Que : 3. Write a C program that return the positions of the pallindrome element in array.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {
	int arr[100], n; // Initialize required variables

	printf("How many elements do you want in array? \n");
	scanf_s("%d", &n); // Take input - Number of array elements.

	printf("Enter array Elements\n");

	for (int i = 0; i < n; i++) // For loop to take input array elements.
	{
		scanf_s("%d", &arr[i]);
	}

	printf("Array Elements are: ");

	for (int i = 0; i < n; i++) // For loop to print array elements.
	{
		printf("%d ", arr[i]);
	}

	printf("\nThe positions of the pallindrome elements in array are: ");

	// For loop to return the positions of the pallindrome element in array.
	for (int i = 0; i < n; i++)
	{
		int number = arr[i];
		int temp_number = number;
		int result = 0;

		// Logic to find Pallindrome of number
		while (number > 0) {
			int extra = number % 10;
			result = (result * 10) + extra;
			number = number / 10;
		}

		if (temp_number == result) {
			printf("%d ", i);
		}
	}
	
}