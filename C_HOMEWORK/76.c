#include "fy_utility.h"

///maximum subsequence expected O(n)

int max_seq(int* arr, size_t size)
{
	int sum = 0, max = arr[0], idx = 0, step = 0;

	for (int i = 1; i < size; i++) //step size
	{
		for (int j = 0; j < size + 1 - i; j++) //step count
		{
			sum = 0;
			for (int k = j; k < size && k < j + i; k++) //step sum
			{
				sum += arr[k];
				printf("%d ", arr[k]);
			}
			printf("|");

			if (sum > max)
			{
				step = i;
				idx = j;
				max = sum;
				//printf("step size = %d idx = %d max = %d\n", step, idx, max);
			}
		}
		printf("\n");
	}
	printf("max = %d\n", max);

	for (int i = idx; i < idx + step; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n\n");
	return 0;
}
