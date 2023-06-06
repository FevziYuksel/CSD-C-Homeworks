#include "f_utility.h"


int isleap(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}


void print_binary(unsigned int number)
{
	if (number >> 1) 
		print_binary(number >> 1);
	putc((number & 1) ? '1' : '0', stdout);
}

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void xor_swap(int* x, int* y)
{
	if (x == y) return;

	*x ^= *y;
	*y ^= *x;
	*x ^= *y;
}

int find_max_index(const int* arr, const size_t size)
{
	int max = 0;
	for (int i = 0; i < size; ++i)
		if (arr[i] > arr[max])
			max = i;
	return max;
}

int find_max(const int* arr, const size_t size)
{
	int max = 0;
	for (int i = 0; i < size; ++i)
		if (arr[i] > max)
			max = arr[i];
	return max;
}

int f_pow(int n, int t)
{
    int r = 1;
    while (t--)
        r *= n;
    return r;
}

long long f_pow64(long long n, long long t)
{
    long long r = 1;
    while (t--)
        r *= n;
    return r;
}

int ndigit(int n)
{
	int ncount = 1;
	while (n /= 10)
		++ncount;

	//for (; n = n / 10; ++ncount);

	return ncount;
}

int ndigit2(int n)
{
	int c = 0;

	do {
		n /= 10;
		++c;
	} while (n);
	return c;
}

long long ndigit64(long long n)
{
	long long ncount = 1;
	while (n /= 10)
		++ncount;

	return ncount;
}

int sum_digit(int n)
{
	int sum = n % 10;

	while (n /= 10)
		sum += n % 10;

	return sum;
}

int sum_digit2(int n)
{
	int sum = 0;

	while (n)
	{
		sum += n % 10;
		n /= 10;
	}

	return sum;
}

int sum_digit3(int n)
{
	int sum = 0;

	while (n)
		sum += n % 10, n /= 10;

	return sum;
}

int sign_shifter(int n, int (*f)(int))
{
	return -f(-n);
}

static int factorial_table[13] = { 1, 1, 2, 6, 24, 120, 720, 5040, 40320, 
									362880, 3628800, 39916800, 479001600};

int factorial(int n)
{
	if (n > 12) return -1;
	if (n < 0) 
		return sign_shifter(n, &factorial);

	return factorial_table[n];
}

/*
	for (int i = 0; i < 20; i++)
		printf("int i = %d, result = %d\n", i, (long long )factorial(i) == lfactorial(i));
		*/


int calculate_factorial(int n)
{
	if (n > 12) return -1;

	int res = 1, sign;

	if (sign = (n < 0))
		 n *= -1;

	while (n)
		res *= n--;

	return sign ? -res : res;
}

long long calculate_longfactorial(long long n)
{
	if (n == 0) return -1ll;

	int sign;
	long long res = 1;

	if (sign = (n < 0))
		n *= -1;

	while (n)
		res *= n--;

	return sign ? - res : res;
}
 
void randomize(void)
{
	srand((unsigned int)time(NULL));   // Initialization, should only be called once.
	//int r = rand();      // Returns a pseudo-random integer between 0 and RAND_MAX.
}


void set_random_array(int* arr, const size_t size)
{
	for (int i = 0; i < size; i++)
		arr[i] = (rand() % 10) * (rand() % 3 ? -1 : 1);
}

void print_array(const int* arr, const size_t size)
{
	printf("[");
	for (int i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
		if(i != size -1)
			printf(", ");
	}
	printf("]\n");
}

int comparator(int x, int y)
{
	return x > y;
}

void bubblesort(int* arr, const size_t size, int (*compare) (int, int))
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

void binary_search(const int* arr, const size_t size, const int value)
{
	size_t begin = 0, end = size - 1;

	
}

void merge_arrays(const int* larr, const size_t lsize, const int* rarr, const size_t rsize)
{

}
