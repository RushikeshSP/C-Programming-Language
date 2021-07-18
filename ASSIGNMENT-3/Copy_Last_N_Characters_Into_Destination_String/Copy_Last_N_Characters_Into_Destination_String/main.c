/*

Que : 22. Write a C program which accept string from user and accept number N then copy last N character into some another string.
			Eg:
				Input String: India is my
				Input of N: 5
				Output String: is my
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {

	char arr[100], new_arr[100]; // Declaration of Required Variables
	int num;

	printf("Enter a String: ");
	//scanf("%s", arr);
	//gets(arr);
	fgets(arr, sizeof(arr), stdin); // Take Input string

	printf("Enter a Number up to which you want to copy the Last string: ");
	scanf_s("%d", &num); // Taking input position up to which you want to print the string.

	printf("User Input String is: %s", arr);

	// Logic to Copy the given string into some another string Only up to n characters From last.

	int len_arr = 0;
	int i = 0;
	while (arr[i] != '\0') // While loop to calculate the length of sring.
	{
		if (arr[i] == '\n') {
			break;
		}
		len_arr++;
		i++;
	}

	int position = len_arr - num;


	i = position;
	int j = 0;
	while (arr[i] != '\0') // While loop to copy some characters into new string.
	{
		if (arr[i] == '\n') {
			break;
		}
		new_arr[j] = arr[i];
		i++, j++;
	}
	new_arr[j] = '\0';
	printf("The Output String Up To %d characters From Last of string is: %s", num, new_arr); 

}