/*

Que : 28. Write a C program which accept string from user and then reverse the string till first N characters without taking another string.
			Eg:
				Input String: India is my country
				Input of N: 8
				Output : si aidnI my country
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {

	char arr[100]; // Declaration of Required Variables
	int num;

	printf("Enter a First String: ");
	//scanf("%s", arr);
	//gets(arr);
	fgets(arr, sizeof(arr), stdin); // Take Input string1

	printf("Enter a number Upto Which You Want To Reverse The String: ");
	scanf_s("%d", &num);

	int len = 0;
	while (arr[len] != '\0') {
		if (arr[len] == '\n') {
			break;
		}
		len++;
	}

	if (num < 0 || num > len) {
		printf("Invalid Number..");
		exit(0);
	}

	printf("User Input String is: %s", arr);

	// Logic to reverse the string of first N characters without usig another string.
	int temp = num;
	int mid = num / 2;

	int i = 0;
	while (mid > 0) 
	{
		char Ch = arr[i];
		arr[i] = arr[num-1];
		arr[num-1] = Ch;
		i++, mid--, num--;
	}

	printf("The reverse string up to %d characters is: %s", temp, arr);
}
