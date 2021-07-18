/*

Que : 17. Write a C program to convert the string from upper case to lower case.
		Eg:
			Input String: India Is My Country
			Output String: india is my country
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

	// Logic to convert uppercase string to lowercase.
	int i = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] == '\n') {
			break;
		}
		while (arr[i] != ' ')
		{
			if (arr[i] == '\n') {
				break;
			}
			if (arr[i] >= 65 && arr[i] <= 90) {
				arr[i] = arr[i] + 32;
			}
			i++;
		}
		i++;
	}
	printf("The Lowercase String is: %s", arr); // Print the lowercase array.

}