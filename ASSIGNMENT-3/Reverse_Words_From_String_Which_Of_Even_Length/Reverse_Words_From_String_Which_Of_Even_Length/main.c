/*

Que : 30. Write a C program which accept string from user and reverse words from that string which are of even length.
			Eg:
				Input String: India is my country. I love my country.
				Output String: India si ym .yrtnuoc I evol ym . Yrtnuoc
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {

	char arr[100]; // Declaration of Required Variables

	printf("Enter a String: ");
	//scanf("%s", arr);
	//gets(arr);
	fgets(arr, sizeof(arr), stdin); // Take Input string

	printf("User Input String is: %s", arr);


	printf("The Reverse Order String is: ");
	// Logic to print even words reverse of string.
	int i = 0, flag = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] == '\n') // If string reaches its end break the loop
		{
			break;
		}
		if (arr[i] == ' ') // Condition for skiping the unnecessary extra white spaces
		{
			printf("%c", arr[i]);
			i++;
			continue;
		}
		if (arr[i] != ' ')
		{
			int first_count = i;
			while (arr[i] != ' ')
			{
				if (arr[i] == '\n')
				{
					break;
				}
				i++;
			}
			int last_count = i;
			if ((last_count - first_count) % 2 == 0) {
				for (int j = last_count-1; j >= first_count; j--) // Print the string in reverse
				{
					printf("%c", arr[j]);
				}
			}
			else {

				for (int j = first_count; j <= last_count-1; j++) // Print the string 
				{
					printf("%c", arr[j]);
				}
			}
		}
	}
}