#include<stdio.h>
#include<stdlib.h>


void main() {

	int n, search, flag = 0;

	int* p = NULL;

	printf("Enter How Many Elements Do You Want In Array : ");
	scanf_s("%d", &n);

	p = (int*)malloc(n * sizeof(int));

	printf("Enter Array Elements..\n");
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", p + i);
	}

	printf("Array Elements are: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", *(p + i));
	}

	printf("\nEnter a Searching Elements: ");
	scanf_s("%d", &search);

	for (int i = 0; i < n; i++) {
		if (search == *(p + i)) {
			flag = 1;
			break;
		}
	}

	if (flag == 1) {
		printf("Element Found..");
	}
	else {
		printf("Element Not Found..");
	}

	void free(p);
}