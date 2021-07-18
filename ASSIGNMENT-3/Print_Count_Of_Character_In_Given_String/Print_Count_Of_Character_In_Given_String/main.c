/*

Que : 3. Write a C program to print count of number characters in given string.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {

	char arr[100], count = 0; // Declaration of Required Variables

	printf("Enter a String: ");
	//scanf("%s", arr);
	//gets(arr);
	fgets(arr, sizeof(arr), stdin); // Take Input string

	printf("User Input String is: %s", arr);

	// Logic to count number of characters in given string.
	int i = 0;
	while (arr[i] != '\0')
	{
		while (arr[i] == ' ')
		{
			i++;
		}
		if (arr[i] == '\n' || arr[i] == '\0') {
			//i++;
			break;
		}
		while (arr[i] != ' ')
		{
			count++;
			i++;
		}
	}
	printf("The count of characters in given string is: %d", count);

}