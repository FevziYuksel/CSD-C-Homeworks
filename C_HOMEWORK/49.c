#include <stdio.h>


int main3()
{
	int i = 1;
	do
	{
		printf("%d\n", i);
		i++;
		if (i < 15)
			continue;
	} while (0);

	return 0;
}