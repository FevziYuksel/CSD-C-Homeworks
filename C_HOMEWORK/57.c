#include "homework.h"

int is_harshad(int n)
{
	return n < 0
		? 0
		: n % sum_digit(n);
}


void find_harshad(int until)
{
	int n = 0, count = 0, flag = 0;
	while ((count += (flag = is_harshad(++n))) <= until)
		if (flag) (void)printf("%d -> %d\n", count, n);
}

void find_harshad2(int until)
{
	
	for (int number = 0, harshad_count = 0; harshad_count <= until; ++number)
	{
		if (is_harshad(number))
			(void)printf("%d -> %d\n", harshad_count++, number);
	}
}

void test57()
{
	find_harshad(100);
}

void test_harshard()
{
	int test[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 18, 20, 21, 24, 27, 30, 36, 40,
	42, 45, 48, 50, 54, 60, 63, 70, 72, 80, 81, 84, 90, 100, 102, 108, 110, 111, 112,
	114, 117, 120, 126, 132, 133, 135, 140, 144, 150, 152, 153, 156, 162, 171, 180, 190, 192, 195, 198, 200 };
	int size = 
		(test);
	int count = 0;

	printf("Array size = %d\n", size);
	for (size_t i = 0; i < size; i++)
		printf("Digit count = %d\tDigit sum = %d\tResult = %d\n", ndigit(test[i]), sum_digit(test[i]), count += is_harshad(test[i]));

	printf("##########Final test result = %d##########\n", size == count);
}