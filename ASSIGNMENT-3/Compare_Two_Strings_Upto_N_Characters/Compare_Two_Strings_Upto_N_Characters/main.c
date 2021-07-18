/*

Que : 26. Write a C program which accept two strings from user and compare only first N characters of two strings. If both strings are equal till first N characters then return 0 otherwise return difference between first mismatch character.
			Eg:
				Input String1: Ramayan
				Input String2: Ramanacharya
				Input of N: 4
				Output: Both strings are equal.
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

	printf("Enter a Number Upto Which You Want To Compare The String:");
	scanf_s("%d", &num); // Input number upto which you want to compare the strings

	printf("User Input First String is: %s", arr1);

	printf("User Input Second String is: %s", arr2);

	printf("The Number Upto Which You Want TO Compare The Strings is: %d\n", num);

	// Logic to compare the strigns upto first N characters.
	int i = 0, num1, num2, flag = 0, count = 0;
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
		count++;
		if (count == num) {
			break;
		}
		i++;
	}

	if (flag == 0) {
		printf("0 (Both Strings are Equal Upto %d Characters)", num);
	}
	else {
		printf("%d (Both Strings are Not Equal Upto %d Characters)", num1 - num2, num);
	}

}