/*

Que : 26. Write a C Program to Find the Number of Elements in an Array (Using Dynamic Memory Allocation)
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                                        *********  Solution  *********


#include<stdio.h> //Include Necessary Header Files.
#include<stdlib.h>

void main() {

	// Logic to find number of elements in array..
	int p[] = { 1,2,3,4,5,6,7 };

	int arr_size = sizeof(p); // get the size of array
	printf("size of arr: %d\n", arr_size);

	int int_size = sizeof(int); // get the size of data type
	printf("size of int: %d\n", int_size);

	int number = arr_size / int_size; // Calculate the number of elements in an array

	printf("The total number of elements in given array are: %d\n", number);

}
