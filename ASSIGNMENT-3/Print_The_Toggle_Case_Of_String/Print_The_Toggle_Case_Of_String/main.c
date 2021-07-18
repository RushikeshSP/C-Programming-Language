/*

Que : 18. Write a C program which toggles the case of a string.
		Eg:
			Input String: technOrbit Infosystems
			Output String: TECHNoRBIT iNFOSYSTEMS
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

	// Logic to convert given string to toggle case.
	int i = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] == '\n') {
			break;
		}
		while (arr[i] != ' ')
		{
			if (arr[i] == '\n') {
				break;
			}
			if (arr[i] >= 65 && arr[i] <= 90) {
				arr[i] = arr[i] + 32;
			}
			else if (arr[i] >= 97 && arr[i] <= 122) {
				arr[i] = arr[i] - 32;
			}
			i++;
		}
		i++;
	}
	printf("The Toggle Case String is: %s", arr); // Print the lowercase array.

}