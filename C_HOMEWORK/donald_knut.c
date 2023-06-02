#include <stdio.h>
#include "f_utility.h"

#define SIZE 10

int knut(void)
{
	int arr[SIZE];
	do
	{
		randomize();
		set_random_array(arr, SIZE);
		print_array(arr, SIZE);

		int sval;

		printf("Arananan degeri gir\n");
		(void)scanf_s("%d", &sval);

		int i;

		for (i = 0; i < SIZE && arr[i] != sval; ++i)
			; //null statement

		if (i < SIZE)
			printf("Bulundugu indis degeri %d\n", i);
		else
			printf("Bulunamadi\n");

		(void)getchar();
		printf("Devam ?");

	} while (getchar() == '\n');



}