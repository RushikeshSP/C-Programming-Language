/*

Que : 13. Write a C program which accept sentence from user and print number of white spaces from that sentence.
		Eg:
			Input String: India is my country
			Output: 3
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {

	char arr[100]; // Declaration of Required Variables
	int space_count = 0;

	printf("Enter a String: ");
	//scanf("%s", arr);
	//gets(arr);
	fgets(arr, sizeof(arr), stdin); // Take Input string

	printf("User Input String is: %s", arr);

	// Logic to print number of Spaces from given string.
	int i = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] == '\n')
		{
			break;
		}
		if (arr[i] == 32)
		{
			space_count++;
		}
		i++;
	}

	printf("Number of spaces in given sting: %d", space_count);
}