#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "homework.h"
#include "list.h"

#define SIZE 10


int main(int argc, char* argv[])
{
	int arr[SIZE] = { 918, 880, 742, 649, 81, 388, 152, 837, 693, 510 };

	randomize();
	//set_random_array(arr, SIZE);
	//print_array(arr, SIZE);

	//bubblesort(arr, SIZE, NULL);

	//print_array(arr, SIZE);
	print_distinct_lookup2(arr, ASIZE(arr));

}

