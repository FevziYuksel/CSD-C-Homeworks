#include "fy_utility.h"

void randomize(void)
{
	srand((unsigned int)time(NULL));   // Initialization, should only be called once.
	//int r = rand();      // Returns a pseudo-random integer between 0 and RAND_MAX.
}


void set_random_array(int* arr, size_t size)
{
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 10;
}

void print_array(const int* arr, size_t size)
{
	printf("[");
	for (int i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
		if (i != size - 1)
			printf(", ");
	}
	printf("]\n");
//void print_array(const int* arr, size_t size)
//{
//	putchar('[');
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d", arr[i]);
//		if (i != size - 1)
//			printf(", ");
//	}
//	putchar('[');
//	putchar('\n');
//}

void print_array(const int* arr, size_t size)
{
	putchar('[');
	while (size--)
		printf("%d, ", *arr++);

	putchar(']');
	putchar('\n');
}

void copy_array(int* pdest, const int* psource, size_t n)
{
	while (n--)
		*pdest++ = *psource++;
}



int comparator(int x, int y)
{
	return x > y;
}

void bubblesort(int* arr, size_t size, int (*compare) (int, int))
{
	if (compare == NULL)
		compare = comparator;

	int is_swapped = 0;
	for (int i = 0; i < size - 1; i++)
	{
		is_swapped = 0;
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (compare(arr[j], arr[j + 1]))
			{
				swap(&arr[j], &arr[j + 1]);
				is_swapped = 1;
			}
		}

		if (!is_swapped)
			break;
	}
}

void reverse_array(int* arr, size_t size)
{
	for (int i = 0; i < size / 2; i++)
	{
		swap(&arr[i], &arr[size - 1 - i]);
	}
}

int binary_search(const int* arr, size_t size, int value)
{
	size_t begin = 0, end = size - 1, mid = (end - begin) / 2;

	bubblesort(arr, size, comparator);

	while (mid > begin && mid < end )
	{
		if (value == arr[mid])
			return mid;
		else if (value < arr[mid])
			mid = (mid - begin) / 2;
		else if (value > arr[mid])
			mid = (end - mid) / 2;

		printf("%zu\n", mid);
	}
	return -1;
}

void merge_arrays(const int* larr, size_t lsize, const int* rarr, size_t rsize)
{

}

//int main(void)
//{
//	int arr[] = { 1, 2, 3, 5, 24, 64, 23 };
//	const size_t size = ASIZE(arr);
//	int res = binary_search(arr, size, 0);
//
//	print_array(arr, size);
//	printf("%d\n", res);
//
//	ptrdiff_t diff = &arr[0] - &arr[1];
//}