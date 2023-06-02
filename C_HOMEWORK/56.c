#include "homework.h"


/*print -3 short-circuit behavior*/
void test56()
{
	int x = 1;

	while (x-- >= 1)
		while (x-- >= 0);
	printf("%d", x);
}