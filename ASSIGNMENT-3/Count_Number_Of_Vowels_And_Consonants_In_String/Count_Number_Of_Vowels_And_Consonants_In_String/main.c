/*

Que : 5. Write a C program to count count of number of vowels and number of consonants in the given string.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.

void main() {

	char arr[100]; // Declaration of Required Variables
	char vowels[] = {'a','e','i','o','u','A','E','I','O','U' }; 
	char consonants[] = { 'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z','B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Y','Z' };
	int vowels_count = 0, consonants_count = 0;

	printf("Enter a String: ");
	//scanf("%s", arr);
	//gets(arr);
	fgets(arr, sizeof(arr), stdin); // Take Input string

	printf("User Input String is: %s", arr);

	int size_vowels = sizeof(vowels);
	int size_consonants = sizeof(consonants);
	int size_datatype = sizeof(vowels[0]);
	int vowels_len = size_vowels / size_datatype; // Calculating size of array vowels
	int consonants_len = size_consonants / size_datatype; // Calculating size of array consonants


	// Logic to count the number of vowels and consonants in given string.
	int i = 0;
	while (arr[i] != '\0') {
		if (arr[i] == '\n') {
			break;
		}
		if (arr[i] == ' ') {
			i++;
			continue;
		}
		for (int j = 0; j < vowels_len; j++)
		{
			if (arr[i] == vowels[j]) // If vowels fount in string increase count of vowels
			{ 
				vowels_count++; 
				break;
			}
		}
		for (int k = 0; k < consonants_len; k++) 
		{
			if (arr[i] == consonants[k]) // If consonants fount in string increase count of consonants
			{
				consonants_count++;
				break;
			}
		}
		i++;
	}

	printf("The vowels count in given string is: %d\n", vowels_count);
	printf("The consonants count in given string is: %d\n", consonants_count);

}