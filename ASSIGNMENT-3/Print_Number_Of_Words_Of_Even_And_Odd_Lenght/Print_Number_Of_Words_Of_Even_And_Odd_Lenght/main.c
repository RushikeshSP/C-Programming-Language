/*

Que : 14. Write a C program which accept sentence from user and print number of words of even and odd length from that sentence.
		Eg:
			Input String: India is my country. I love my country.
			Output : Even: 6 Odd: 2
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


	// Logic to count the number of words of even and odd length from that sentence.
	int i = 0, even_count = 0, odd_count = 0;
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
			int count = 0;
			while (arr[i] != ' ') {
				if (arr[i] == '\n') {
					break;
				}
				count++;
				i++;
			}
			if (count % 2 == 0) {
				even_count++;
			}
			else {
				odd_count++;
			}
		}
	}

	printf("Even count: %d\nOdd count: %d\n", even_count, odd_count);
}