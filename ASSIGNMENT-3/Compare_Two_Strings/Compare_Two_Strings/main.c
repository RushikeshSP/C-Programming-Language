/*

Que : 25. Write a C program which accept two strings from user and compare two strings. If both strings are equal then return 0 otherwise return difference between first mismatch character.
			Eg:
				Input String1: India is my country.
				Input String2: India is my country.
				Output: Both strings are equal.
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

	// Logic to compare two strings.
	int i = 0, num1, num2, flag = 0;
	while (arr1[i] != '\0') {
		if (arr1[i] == '\n') {
			break;
		}
		if (arr1[i] != arr2[i]) {
			num1 = arr1[i];
			num2 = arr2[i];
			flag = 1;
			break;
		}
		i++;
	}

	if (flag == 0) {
		printf("0 (Both Strings are Equal)");
	}
	else {
		printf("%d (Both Strings are Not Equal)", num1-num2);
	}

}