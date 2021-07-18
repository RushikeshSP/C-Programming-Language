/*

Que : 20. Write a C program which accept string from user and copy that string into some another string.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {

	char arr[100], new_arr[100]; // Declaration of Required Variables

	printf("Enter a String: ");
	//scanf("%s", arr);
	//gets(arr);
	fgets(arr, sizeof(arr), stdin); // Take Input string

	printf("User Input String is: %s", arr);

	// Logic to Copy the given string into some another string.
	int i = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] == '\n') {
			break;
		}
		new_arr[i] = arr[i];
		i++;
	}
	new_arr[i] = '\0';
	printf("The Copyed String Into Another String is: %s", new_arr); // Print the lowercase array.

}