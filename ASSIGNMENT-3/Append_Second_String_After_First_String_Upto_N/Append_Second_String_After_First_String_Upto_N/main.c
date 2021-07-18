/*

Que : 24. Write a C program which accept two strings from user and append N characters of second string after first string.
		Eg:
			Input String: India Country
			Input of N: 4
			Output String: IndiaCoun
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {

	char arr1[100], arr2[100]; // Declaration of Required Variables
	int num;

	printf("Enter a First String: ");
	//scanf("%s", arr);
	//gets(arr);
	fgets(arr1, sizeof(arr1), stdin); // Take Input string1

	printf("Enter a Second String: ");
	fgets(arr2, sizeof(arr2), stdin); // Take Input string2

	printf("Enter a Number: ");
	scanf_s("%d", &num); // Enter a number to append the second string up to that number

	printf("User Input First String is: %s", arr1);
	                   
	printf("User Input Second String is: %s", arr2);

	// Logic to append N characters of second string after first string.
	int i = 0, count = 0;
	while (arr1[i] != '\0') // While loop to count the length of first array.
	{
		if (arr1[i] == '\n') {
			break;
		}
		count++;
		i++;
	}

	int j = 0, arr2_count = 0;
	while (arr2[j] != '\0') {
		if (arr2[j] == '\n') {
			break;
		}
		if (arr2_count == num) {
			break;
		}
		arr1[count] = arr2[j];
		count++;
		arr2_count++;
		j++;
	}
	arr1[count] = '\0';

	printf("The appended Second string of First %d characters into First string is: %s", num, arr1);

}