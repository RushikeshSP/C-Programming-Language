/*

Que : 11. Write a C program which accepts a string from user which contains a characters from ‘b’ to ‘y’.
		Eg:
			Input String: mn jn kn kazfd
			Output String: mn jn kn k
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

	printf("String with characters containing 'b' to 'y' is: ");
	// Logic to print string containing characters between 'b' to 'y'
	int i = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] == '\n') 
		{
			break;
		}
		if ((arr[i] >= 98 && arr[i] <= 121) || (arr[i] >= 66 && arr[i] <= 89) || (arr[i] == 32))
		{
			printf("%c", arr[i]);
		}
		i++;
	}
}