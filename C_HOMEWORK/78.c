#include "fy_utility.h"

//can be buffered
int closest_prime(int value)
{
	if (value < 3)
		return 0;

	while (!is_prime(--value));

	return value;
}

