/*

Que : 4. Write a C program that return the positions of the pallindrome element in array (Using Dynamic Memory Allocation)
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

	printf("\nThe positions of the pallindrome elements in array are: ");

	// For loop to return the positions of the pallindrome element in array.
	for (int i = 0; i < n; i++)
	{
		int number = *(p + i);
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