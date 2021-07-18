/*

Que : 15. Write a C program which accept sentence from user and print last word from that sentence.
		Eg:
			Input String: India is my country
			Output String: country
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


	// Logic to print last word from the sentence.
	int i = 0, position = 0, letter_count = 0;
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
			position = i;
			int count = 0;
			while (arr[i] != ' ') {
				if (arr[i] == '\n') {
					break;
				}
				count++;
				i++;
			}
			letter_count = count;
		}
	}
	
	printf("The last word of given sentence is: ");

	for (int i = 0; i < letter_count; i++)
	{
		printf("%c", arr[position]);
		position++;
	}
}