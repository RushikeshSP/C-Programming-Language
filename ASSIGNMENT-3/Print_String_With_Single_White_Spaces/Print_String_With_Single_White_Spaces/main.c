/*

Que : 2.Write a C program to accept string with multiple spaces from user and print it with a sinlge space as a delimiter.
		Eg:
			Input String:
				_____India_____is_my_________country______________
			Output String:
				India_is_my_country (Consider _ as space)
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

	printf("String without Extra Speces: ");

	// Logic to remove extra speces from given string.
	int i = 0;
	while(arr[i] != '\0')
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
			printf("%c", arr[i]);
			i++;
		}
		printf(" ");
	}
}