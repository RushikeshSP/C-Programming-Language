/*

Que : 21.Write a program which accept string from user and copy first N charaters into some destination string.
			Eg:
				Input String: India is my country
				Input of N: 8
				Output String: India is
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

	printf("Enter a Number up to which you want to copy the string: ");
	scanf_s("%d", &num); // Taking input position up to which you want to print the string.

	printf("User Input String is: %s", arr);

	// Logic to Copy the given string into some another string Only up to n characters.
	int i = 0, count = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] == '\n') {
			break;
		}
		if (count == num) {
			break;
		}
		new_arr[i] = arr[i];
		count++;
		i++;
	}
	new_arr[i] = '\0';
	printf("The Output String Up To %d characters is: %s", num,  new_arr); // Print the lowercase array.

}