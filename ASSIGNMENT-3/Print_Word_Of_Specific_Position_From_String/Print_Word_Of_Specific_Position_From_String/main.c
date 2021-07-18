/*

Que : 16. Write a C program which accept sentence from user and position from user and print the word at that position.
			Eg:
				Input String: India is my country
				Input Position: 3
				Output String: my
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> // Include Necessary Header Files.

void main() {

	char arr[100]; // Declaration of Required Variables
	int position;

	printf("Enter a String: ");
	//scanf("%s", arr);
	//gets(arr);
	fgets(arr, sizeof(arr), stdin); // Take Input string

	printf("Enter the position of word: ");
	scanf_s("%d", &position);

	printf("\nUser Input String is: %s", arr);
	printf("Position of the word to print is: %d", position);


	printf("\nThe word at position %d is: ", position);
	// Logic to print the word of Specific position.
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
			if (count == position) {
				while (arr[i] != ' ') {
					printf("%c", arr[i]);
					i++;
				}
			}
			while (arr[i] != ' ') {
				if (arr[i] == '\n') {
					break;
				}
				i++;
			}
			i++;
		}
	}
	printf("\n");
}