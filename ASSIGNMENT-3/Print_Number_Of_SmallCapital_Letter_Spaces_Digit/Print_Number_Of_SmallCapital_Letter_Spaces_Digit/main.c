/*

Que : 12. Write a C program which accept sentence from user and print number of small letters, capital letters, Spaces and digits from that sentence.
		Eg:
			Input String: abcDE 5Glm1 O
			Output String: Small: 5 Capital: 4 Digits: 2 Spaces: 2
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {

	char arr[100]; // Declaration of Required Variables
	int small_count = 0, capital_count = 0, digit_count = 0, space_count = 0;

	printf("Enter a String: ");
	//scanf("%s", arr);
	//gets(arr);
	fgets(arr, sizeof(arr), stdin); // Take Input string

	printf("User Input String is: %s", arr);

	// Logic to print number of small letters, capital letters, Spaces and digits
	int i = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] == '\n')
		{
			break;
		}
		if (arr[i] == 32)
		{
			space_count++;
		}
		else if (arr[i] >= 48 && arr[i] <= 57) {
			digit_count++;
		}
		else if (arr[i] >= 65 && arr[i] <= 90) {
			capital_count++;
		}
		else if (arr[i] >= 97 && arr[i] <= 122) {
			small_count++;
		}
		i++;
	}

	printf("Small: %d  Capital: %d  Digits: %d  Spaces: %d\n", small_count, capital_count, digit_count, space_count);
}