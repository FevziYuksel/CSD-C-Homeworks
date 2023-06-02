#include "homework.h"

int lcd(int a, int b)
{
	int min = MIN(a, b), i;
	for (i = 2; i * i < min; ++i)
	{
		LOG(i);
		if (a % i == 0 && b % i == 0)
			break;
			
	}
	return i;
}

static int gcd2(int a, int b)
{
	int i;
	for (i = MIN(a, b); 1 <= i; --i)
	{
		LOG(i);
		if (a % i == 0 && b % i == 0)
			return i;
	}
	return i;
}

int gcd_basic(int a, int b)
{
	int i = MIN(a, b);
	for (; a % i != 0 || b % i != 0; --i);
	return i;
}

int gcd(int a, int b)
{
	int i = MIN(a, b);
	while (a % i != 0 || b % i != 0)
		LOG(i--);
	return i;
}

int gcd_euclid_recursive(int a, int b)
{
	if (b == 0)
		return a;

	return gcd_euclid_recursive(b, a % b);
}

/*-o3 build has bug*/
int gcd_euclid_loop(int a, int b)
{
	if (b == 0)
		return 0;

	int temp;
	while (a % b > 0)
	{		
		temp = b;
		b = a % b;
		a = temp;
	}
	return b;
}

void test_gcd()
{
	int x, y;
	printf("iki tam sayý giriniz: ");
	scanf_s("%d%d", &x, &y);

	(void)printf("result = %d\n", gcd_euclid_recursive(28, 12));
	(void)printf("result = %d\n", gcd_euclid_loop(28, 12));
}
