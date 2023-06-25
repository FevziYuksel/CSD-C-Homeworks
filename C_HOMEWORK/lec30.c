#include "f_utility.h"


//int print_distinct(const int* arr, const size_t size)
//{
//	int flag = 1;
//
//	for (int i = 0; i < size; ++i)
//	{
//		flag = 1;
//		for (int j = 0; j < size; ++j)
//		{
//			if (i != j && arr[i] == arr[j])
//			{
//				flag = 0;
//				break;
//			}
//		}
//
//		if (flag)
//			printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//Without flag var
int print_distinct(const int* arr, size_t size)
{

	for (int i = 0; i < size; ++i)
	{
		int j;
		for (j = 0; j < size; ++j)
			if (i != j && arr[i] == arr[j])
				break;

		if (j == size)
			printf("%d ", arr[i]);
	}
	putchar('\n');

	return 0;
}

int pddynamic(const int* arr, size_t size)
{
	int* lookup = (int*) malloc(sizeof(int) * find_max(arr, size)); //int -> long long int
	if (lookup == NULL)
		return memory;

	for (int i = 0; i < size; ++i)
	{
		if (lookup[arr[i]] != arr[i])
		{
			printf("%d ", arr[i]);
			lookup[arr[i]] = arr[i];
		}
	}
	free(lookup);

	return 0;
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
			if (i == 0)
				printf("%d ", arr[j]);
			else if (arr[j] >= max)
				printf("* ");
			else
				printf("  ");
		}
		--max;
		putchar('\n');
	}
	printf("\n\n");
	return 0;
}


#define SIZE 20

int main(void)
{
	int arr[SIZE];

	RANDOMIZE();
	set_random_array(arr, SIZE);
	vertical_histogram(arr, SIZE);


	return 0;
}






