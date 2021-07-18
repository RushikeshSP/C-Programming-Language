/*

Que : 29. Write a C program which accept string from user and then accept range and reverse the string in that range without taking another string.
			Eg:
				Input String: India is my country
				Input of N1: 3
				Input of N1: 9
				Output String: Indm si aicountry
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {

	char arr[100]; // Declaration of Required Variables
	int num1,num2;

	printf("Enter a First String: ");
	//scanf("%s", arr);
	//gets(arr);
	fgets(arr, sizeof(arr), stdin); // Take Input string1

	printf("Enter a number From Which You Want To Reverse The String: ");
	scanf_s("%d", &num1);

	printf("Enter a number Upto Which You Want To Reverse The String: ");
	scanf_s("%d", &num2);

	int len = 0;
	while (arr[len] != '\0') {
		if (arr[len] == '\n') {
			break;
		}
		len++;
	}

	if (num1 < 0 || num2 > len) {
		printf("Invalid Number..");
		exit(0);
	}

	printf("User Input String is: %s", arr);

	// Logic to reverse the string into some range of characters.
	int temp1 = num1;
	int temp2 = num2;
	int mid = (num1+num2) / 2;

	int i = num1-1;
	while (mid > num1)
	{
		char Ch = arr[i];
		arr[i] = arr[num2 - 1];
		arr[num2 - 1] = Ch;
		i++, mid--, num2--;
	}

	printf("The reverse string From %d to %d characters is: %s", temp1, temp2, arr);
}
