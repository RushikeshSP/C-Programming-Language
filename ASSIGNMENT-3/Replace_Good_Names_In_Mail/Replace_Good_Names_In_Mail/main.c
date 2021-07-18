/*

Que : 9. Write a C program to replace Good names in mail.
		Eg:
			Raw String: Hello GoodName
				Input String: India
				Output String: Hello India
				Input String: Sangamner
				Output String: Hello Sangamner
				Input String: technOrbit
				Output String: Hello technOrbit
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> // Include Necessary Header Files.

void main() {

	char arr[100]; // Declaration of Required Variables
	char raw_string[100] = { "Hello GoodName" };

	printf("Enter a String: ");
	//scanf("%s", arr);
	//gets(arr);
	fgets(arr, sizeof(arr), stdin); // Take Input string

	printf("User Input String is: %s", arr);


	printf("The Output string is: ");
	// Logic to replace good names in mail.
	int i = 0, j = 0;

	while (raw_string[j] != ' ') {
		printf("%c", raw_string[j]);
		j++;
	}
	printf(" ");
	while (arr[i] != '\0')
	{
		if (arr[i] == '\n') // If string reaches its end break the loop
		{
			break;
		}
		printf("%c", arr[i]);
		i++;
	}
}