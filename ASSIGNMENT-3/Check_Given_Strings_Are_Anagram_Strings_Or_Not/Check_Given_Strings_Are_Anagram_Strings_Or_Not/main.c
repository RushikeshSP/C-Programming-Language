/*

Que : 19. Write a C program to check whether given strings are Anagram strings or not.
		Eg:
			Input String1: abccd
			Input String2: cbcda
			Output String: Strings are anagram
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
	fgets(arr1, sizeof(arr1), stdin); // Take Input string

	printf("Enter a Second String: ");
	fgets(arr2, sizeof(arr2), stdin); // Take Input string

	printf("User Input First String is: %s", arr1);

	printf("User Input Second String is: %s", arr2);

	// Logic to Check strings are anagram or not.

	int len1 = 0, len2 = 0;
	while (arr1[len1] != '\0') {
		if (arr1[len1] == '\n') {
			len1--;
			break;
		}
		len1++;
	}
	while (arr2[len2] != '\0') {
		if (arr2[len2] == '\n') {
			len2--;
			break;
		}
		len2++;
	}

	int flag1 = 0;

	for (int i = 0; i <= len2; i++)
	{
		int flag = 0;
		for (int j = 0; j <= len1; j++)
		{
			if (arr2[i] == arr1[j]) {
				flag = 1;
				break;
			}
		}

		if (flag == 0) {
			flag1 = 1;
			break;
		}
	}

	if (flag1 == 1) {
		printf("Given Strings are not an Anagram Strings\n");
	}
	else {
		printf("Given Strings are Anagram Strings\n");
	}
}