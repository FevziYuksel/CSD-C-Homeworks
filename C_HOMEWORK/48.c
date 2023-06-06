#include "f_utility.h"



static int test[] = {
3, 5, 11, 17, 31, 41, 59, 67, 83, 109, 127, 157, 179, 191, 211, 241, 277,
283, 331, 353, 367, 401, 431, 461, 509, 547, 563, 587, 599, 617, 709, 739,
773, 797, 859, 877, 919, 967, 991};

int is_prime(int n)
{
	if (n < 2)
		return 0;
	if (n == 2)
		return 1;

	for (int i = 3; i < n; i += 2)
		if (n % i == 0)
			return 0;
	
	return 1;
}

int is_superprime(int n)
{
	if (!is_prime(n))
		return 0;

	if (n == 2)
		return 0;

	int order = 1;

	for (int i = 3; i < n; i += 2)
		if (is_prime(i))
			++order;
				
	return is_prime(++order);
}

int is_superprime_dynamic(int n, int* lookup, size_t size)
{
	//binary search
}

void test48()
{
	int c = 1;
	for (size_t i = 0; i < 39; i++)
	{
		printf("%d : %d\n", c++, is_superprime(test[i]));
	}
}




