/*

Que : 23. Write a C program which accept two strings from user and append second string after first string.
		Eg:
			Input String: India Country
			Output String: IndiaCountry
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {

	char arr1[100], arr2[100]; // Declaration of Required Variables

	printf("Enter a First String: ");
	//scanf("%s", arr);
	//gets(arr);
	fgets(arr1, sizeof(arr1), stdin); // Take Input string1

	printf("Enter a Second String: ");
	fgets(arr2, sizeof(arr2), stdin); // Take Input string2

	printf("User Input First String is: %s", arr1);

	printf("User Input Second String is: %s", arr2);

	int i = 0, count = 0;
	while (arr1[i] != '\0') {
		if (arr1[i] == '\n') {
			break;
		}
		count++;
		i++;
	}

	int j = 0;
	while (arr2[j] != '\0') {
		if (arr2[j] == '\n') {
			break;
		}
		arr1[count] = arr2[j];
		count++;
		j++;
	}
	arr1[count] = '\0';

	printf("The appended Second string into First string is: %s", arr1);

}