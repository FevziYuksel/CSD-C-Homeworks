#include "f_utility.h"

void test81(void)
{
	static int table[4] = { 7, 11, 15, 19 };
	randomize();

	for (;;) {
		printf("%d\n", table[rand() % 4]);
		(void)getchar();
	}
}

