#include "fy_utility.h"

int smith_number(int n)
{
	int sum = 0;
	int div = 2;
	while (n != 1)
	{
		while (n % div == 0)
		{
			sum += sum_digit(div);
			n /= div;
		}
		++div;
	}
	return sum;
}

int is_smith(int n)
{
	return sum_digit(n) == smith_number(n);
}

void test52(void)
{
	int test[49] = {
	4, 22, 27, 58, 85, 94, 121, 166, 202, 265, 274, 319, 346,
	355, 378, 382, 391, 438, 454, 483, 517,526, 535, 562, 576,
	588, 627, 634, 636, 645, 648, 654, 663, 666, 690, 706, 728,
	729, 762, 778, 825, 852, 861, 895, 913, 915, 922, 958, 985 };

	for (int i = 0; i < 49; i++)
		printf("%d -> %d\n", i, is_smith(test[i]));
}