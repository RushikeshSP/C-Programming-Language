/*

Que : 4.Write a C program to accept string and print it in the reverse order.
		Eg:
			Input String: India is my country
			Output String: yrtnuoc ym si aidnI
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {

	char arr[100]; // Declaration of Required Variables

	printf("Enter a String: ");
	//scanf("%s", arr);
	//gets(arr);
	fgets(arr, sizeof(arr), stdin); // Take Input string

	printf("User Input String is: %s", arr);

	// Logic to print reverse of string.
	int i = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] == '\n') {
			break;
		}
		i++;
	}
	int last_char = i--; // Get the last charcter of the string

	printf("The Reverse Order String is: ");

	for (int i = last_char - 1; i >= 0; i--) // For loop to print array element in reverse.
	{
		printf("%c", arr[i]);
	}

}