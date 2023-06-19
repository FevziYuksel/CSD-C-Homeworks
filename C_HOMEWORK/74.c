#include "fy_utility.h"

//int print_distinct(const int* arr, size_t size)
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
	int* lookup = (int*)malloc(sizeof(int) * find_max(arr, size)); //int -> long long int
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