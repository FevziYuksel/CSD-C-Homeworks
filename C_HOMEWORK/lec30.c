#include <stdio.h>
#include <string.h>
#include "f_utility.h"
#ifndef RANDOMIZE
#include <stdlib.h>
#include <time.h>
#define RANDOMIZE() srand(time(NULL));


int print_distinct(const int* arr, const size_t size)
{
	int flag = 1;

	for (int i = 0; i < size; ++i)
	{
		flag = 1;
		for (int j = 0; j < size; ++j)
		{
			if (i != j && arr[i] == arr[j])
			{
				flag = 0;
				break;
			}
		}

		if (flag)
			printf("%d ", arr[i]);
	}

	return 0;
}

int print_distinct2(int* arr, const size_t size)
{
	int* temp = (int*)malloc(size * sizeof(int));
	return 0;
}

int horizontal_histogram(int* arr, const size_t size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < arr[i]; ++j)
			putchar('*');
		putchar('\n');
	}
	printf("\n\n");
	return 0;
}

int vertical_histogram(int* arr, const size_t size)
{
	int max, height;

	height = max = find_max(arr, size);

	for (int i = 0; i < height; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			if (arr[j] >= max)
				printf("* ");
			else
				putchar("  ");
		}
		--max;
		putchar('\n');
	}
	printf("\n\n");
	return 0;
}

/*
int main(void)
{
//#define SIZE 10
//
//	int arr[SIZE];
//
//	RANDOMIZE();
//	for (int i = 0; i < SIZE; ++i)
//	{
//		arr[i] = rand() % 20 + 1;
//		printf("%d ", arr[i]);
//	}
//	printf("\n\n");
//	vertical_histogram(arr, SIZE);

	typedef enum 
	{
		false_t = 0, true_t
	} bool_t;

	char s[] = {'f', 'e', 'v', '\0'};
	printf("%zu\n", sizeof(s));
	puts(s);
	puts("fev");
	char* a = "fev";
	printf("%s\n", !strcmp(s, a) ? "true" : "false");
	return 0;
}
*/
#endif // !RANDOMIZE