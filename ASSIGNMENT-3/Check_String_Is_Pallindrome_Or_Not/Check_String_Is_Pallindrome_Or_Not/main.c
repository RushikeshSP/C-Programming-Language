/*

Que : 31. Write a C program which accept string from user and check whether string is palindrome or not.
			Eg:
				Input String: level
				Output String: String is palindrome.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {

	char arr[100], rev_arr[100]; // Declaration of Required Variables

	printf("Enter a String: ");
	//scanf("%s", arr);
	//gets(arr);
	fgets(arr, sizeof(arr), stdin); // Take Input string

	printf("User Input String is: %s", arr);

	// Logic to Check string is pallindrome or not

	int len = 0;
	while (arr[len] != '\0') {
		if (arr[len] == '\n') {
			len--;
			break;
		}
		len++;
	}
	int i = 0;
	while (len >= 0)
	{
		rev_arr[i] = arr[len];
		i++, len--;
	}
	rev_arr[i] = '\0';

	int j = 0, flag = 0;
	while (arr[j] != '\0') 
	{
		if (arr[j] == '\n') {
			break;
		}
		if (arr[j] != rev_arr[j]) {
			flag = 1;
			break;
		}
		j++;
	}

	if (flag == 0) {
		printf("Given String is a Pallindrome String.\n");
	}
	else {
		printf("Given String is not a Pallindrome String.\n");
	}
}