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

int find_max_index(const int* arr, size_t size)
{
	int max = 0;
	for (int i = 0; i < size; ++i)
		if (arr[i] > arr[max])
			max = i;
	return max;
}

int find_max(const int* arr, size_t size)
{
	int max = 0;
	for (int i = 0; i < size; ++i)
		if (arr[i] > max)
			max = arr[i];
	return max;
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
 

