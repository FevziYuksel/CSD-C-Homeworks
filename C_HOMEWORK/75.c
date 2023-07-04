#include "fy_utility.h"



#define			SIZE		20

int test75(void)
{
	int a[SIZE];

	srand((unsigned)time(0));
	for (int i = 0; i < 20; ++i) {
		a[i] = rand() % 20 + 1;
		printf("%d ", a[i]);
	}
	printf("\n");
}

int horizontal_histogram(int* arr, size_t size)
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

int vertical_histogram(int* arr, size_t size)
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
