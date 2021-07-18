/*

Que : 9. Write a program in C to print all unique elements in an array.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {

	int arr[100], freq[100], n; // Declaration of Required Variables

	printf("How many Elements do you want in array?\n");
	scanf_s("%d", &n); // Take Input - Number of array elements.

	printf("Enter Array Elements: \n");
	for (int i = 0; i < n; i++) // For loop to take input array elements.
	{
		scanf_s("%d", &arr[i]);
		freq[i] = 0;
	}

	printf("Array Elements are: ");

	for (int i = 0; i < n; i++) // For loop to print array elements.
	{
		printf("%d ", arr[i]);
	}

	// Logic to find frequency count of each element of an array.
	for (int i = 0; i < n; i++)
	{
		int count = 1;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j]) {
				count++;
				freq[j] = -1;
			}
		}
		if (freq[i] != -1) {
			freq[i] = count;
		}

	}

	printf("\nAll Unique elements in an array are: ");

	for (int i = 0; i < n; i++) // For loop to print array elements.
	{
		if (freq[i] == 1) // Condition to check unique element in frequency array.
		{
			printf("%d ", arr[i]);
		}
	}
}