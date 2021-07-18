/*

Que : 7.Write a C program to replace space with ‘$’ in given string.
		Eg:
			Input String: India is my country
			Output String: India$is$my$coutry
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


	printf("The Modified string is: ");
	// Logic to replace the white spaces with '$' in given string.
	int i = 0, flag = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] == '\n') // If string reaches its end break the loop
		{
			break;
		}
		if (arr[i] == ' ') // Condition for replacing the white space with '$'
		{
			arr[i] = '$';
			i++;
			continue;
		}
		if (arr[i] != ' ')
		{
			i++;
			continue;
		}
	}

	printf("%s", arr); // Print the modified array.
}