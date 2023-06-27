#include "fy_utility.h"

//Depricated
//int max_seq(const int* arr, size_t size)
//{
//	int sum = 0, max = arr[0], idx = 0, step = 0;
//
//	for (int i = 1; i < size; i++) //step size
//	{
//		for (int j = 0; j < size + 1 - i; j++) //step count
//		{
//			sum = 0;
//			for (int k = j; k < size && k < j + i; k++) //step sum
//			{
//				sum += arr[k];
//				printf("%d ", arr[k]);
//			}
//			printf("|");
//
//			if (sum > max)
//			{
//				step = i;
//				idx = j;
//				max = sum;
//				//printf("step size = %d idx = %d max = %d\n", step, idx, max);
//			}
//		}
//		printf("\n");
//	}
//	printf("max = %d\n", max);
//
//	for (int i = idx; i < idx + step; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	printf("\n\n");
//	return max;
//}

//Kadane's algorithm
int max_seq(const int* arr, size_t size)
{
	int sum = 0, max = arr[0], idx = 0, step = 0;

	for (int i = 1; i < size; i++) 
	{
		sum += arr[i];

		if (sum > max)
		{
			max = sum;
			idx = i;
		}
			
		if (sum < 0)
		{
			sum = 0;
			step = i;
		}
			
	}

	for (int i = idx; i < idx + step; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n\n");
	return max;
}



int main2(void)
{
	//int arr[] = { 3, 4, -8, 1, 7, -2 };
	int arr[] = { -5, -4, 0, 11, -8, 9, 10, -75 };

	//randomize();
	//set_random_array(arr, ASIZE(arr), 10);
	//print_array(arr, ASIZE(arr));
	//putchar('\n');

	max_seq(arr, ASIZE(arr));


	return 0;
}