/*

Que : 8. Write a program which accept sentence from user and print number of words from that sentence.
		Input String: India_is_my_country
			Output: 4
		Input String: ______India______is____my____country____ (Consider _ as space)
			Output: 4
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> // Include Necessary Header Files.

void main() {

	char arr[100]; // Declaration of Required Variables

	printf("Enter a String: ");
	//scanf("%s", arr);
	//gets(arr);
	fgets(arr, sizeof(arr), stdin); // Take Input string

	printf("User Input String is: %s", arr);


	printf("The Number of words in given string are: ");
	// Logic to count the number of words in given string.
	int i = 0, count = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] == '\n') // If string reaches its end break the loop
		{
			break;
		}
		if (arr[i] == ' ') // Condition for skiping the white spaces
		{
			i++;
			continue;
		}
		if (arr[i] != ' ')
		{
			count++;
			while (arr[i] != ' ') {
				if (arr[i] == '\n') {
					break;
				}
				i++;
			}
		}
	}

	printf("%d", count); // Print the number of world count in given string.
}