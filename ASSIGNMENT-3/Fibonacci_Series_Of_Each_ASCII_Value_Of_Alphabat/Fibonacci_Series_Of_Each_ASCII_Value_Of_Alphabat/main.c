/*

Que : 10. Write a C program to print all fibonacci series upto each ASCII code of aphabates in given string.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> // Include Necessary Header Files.

void main() {

	char arr[100]; // Declaration of Required Variables

	printf("Enter a String: ");
	//scanf("%s", arr);
	//gets(arr);
	fgets(arr, sizeof(arr), stdin); // Take Input string

	printf("User Input String is: %s", arr);


	// Logic to print fibonacci series upto each ASCII code of aphabates in given string.
	int i = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] == '\n') // If string reaches its end break the loop
		{
			break;
		}

		int count = arr[i];
		int num1 = 0, num2 = 1, result; // Initialise required variables

		printf("\nFibonacci Series up to Number %d is: ", count);
		printf("%d %d ", num1, num2); // First two default terms of the fibonacci series

		while (1)
		{
			result = num1 + num2;
			if (result > count) {
				break;
			}
			printf("%d ", result);
			num1 = num2;
			num2 = result;
		}
		i++;
	}
}