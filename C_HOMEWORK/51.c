#include <stdio.h>


/*
int main()
{
	int n = 5;

	for (int i = 0; i < n; i--)
		printf("necati\n");

	return 0;
}*/

static void solution1(void)
{
	int n = 5;

	for (int i = 0; i < n; i++)
		printf("necati\n");
}

static void solution2(void)
{
	int n = 5;

	for (int i = 0; i + n; i--)
		printf("necati\n");

	return 0;
}

static void solution3(void)
{
	int n = 5;

	for (int i = 0; -i < n; i--)
		printf("necati\n");
}

