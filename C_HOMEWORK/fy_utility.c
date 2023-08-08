#include "fy_utility.h"


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

int find_max_idx(const int* arr, size_t size)
{
	int max = 0;
	for (size_t i = 0; i < size; ++i)
		if (arr[i] > arr[max])
			max = i;
	return max;
}

int find_max(const int* arr, size_t size)
{
	int max = 0;
	for (size_t i = 0; i < size; ++i)
		if (arr[i] > max)
			max = arr[i];
	return max;
}

int* find_max_ptr(const int* arr, size_t size) //broken
{
	int* pmax = arr;

	while (size--)
	{
		int a = *arr, b = *pmax;
		if (*arr > *pmax)
			pmax = arr++;
	}


	return pmax;
}

//int* find_max_ptr(const int* arr, size_t size)
//{
//	int* pmax = arr;
//
//	for (size_t i = 0; i < size; ++i)
//		if (arr[i] > *pmax)
//			pmax = arr + i;
//	
//	return pmax;
//}

int find_min_idx(const int* arr, size_t size)
{
	int min = 0;
	for (size_t i = 0; i < size; ++i)
		if (arr[i] > arr[min])
			min = i;
	return min;
}

int find_min(const int* arr, size_t size)
{
	int min = 0;
	for (size_t i = 0; i < size; ++i)
		if (arr[i] < min)
			min = arr[i];
	return min;
}

int* find_min_ptr(const int* arr, size_t size) //arr <- psource //broken
{
	int* pmin = arr;

	while (size--)
		if (*arr++ < *pmin)
			pmin = arr;

	return pmin;
}

void get_max_min(const int* arr, size_t size, int* pmax, int* pmin) //broken
{
	*pmin = *pmax = *arr;

	while (size--)
	{
		if (*arr++ < *pmin)
			*pmin = *arr;

		if (*arr++ > *pmax)
			*pmax = *arr;
	}
}

int fy_pow(int n, int t)
{
    int r = 1;
    while (t--)
        r *= n;
    return r;
}

long long fy_pow64(long long n, long long t)
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
 
int debug(int* arr)
{
	//int arr[5]; // bu olayý anlamadým array tipinde izin vermiyor

	return *arr++;
}

//int main(void)
//{
//	int arr[] = { 3, 5, 4, 2 };
//	int max, min;
//	//get_max_min(arr, ASIZE(arr), &max, &min);
//	//int a = find_max_ptr(arr, ASIZE(arr));
//
//	//printf("%d %d %d\n", max, min, a);
//
//	printf("%d\n", debug(arr));
//
//
//	return 0;
//}