#include "divisors.h"

void free_int_array_t(int_array_t* self)
{
	free(self);
}

/*bad practice easy to forget free the memory*/
int_array_t* find_div(int n)
{
	size_t size = 10;
	int div = 2, i = 1;
	int* divs;
	if (!(divs = (int*)malloc(sizeof(int) * size)))
		return NULL;
	*divs = 1;

	while (n != 1)
	{
		while (n % div == 0)
		{
			divs[i++] = div;
			n /= div;

			if (i > size)
			{
				int* ptr = (int*)realloc(divs, size + 5);
				if (!ptr)
					return NULL;
			}
		}
		++div;
	}

	int_array_t* arr = (int_array_t*)malloc(sizeof(int_array_t));
	if (!arr)
		return NULL;

	arr->size = i;
	arr->arr = divs;

	return arr;
}

int find_div_buffer(int* divs, size_t size, int n)
{
	int div = 2, i = 1;

	*divs = 1;

	while (n != 1)
	{
		while (n % div == 0)
		{
			divs[i++] = div;
			n /= div;

			if (i > size)
			{
				int* ptr = (int*)realloc(divs, size + 5);
				if (!ptr)
					return NULL;
			}
		}
		++div;
	}
	return i;
}