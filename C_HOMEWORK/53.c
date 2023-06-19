#include "fy_utility.h"

int get_digital_root(int val)
{
	LOG(val);
	if (ndigit(val) == 1)
		return val;

	int res = 0;
	while (val)
	{
		res += val % 10;
		val /= 10;
	}
	

	return get_digital_root(res);
}

int get_digital_root_loop(int val)
{
	
	while (ndigit(val) > 1)
	{
		LOG(val);
		int res = 0;
		while (val)
		{
			res += val % 10;
			val /= 10;
		}
		val = res;
	}

	return val;
}

void test53()
{
	printf("digital root = %d\n", get_digital_root(34879));
}