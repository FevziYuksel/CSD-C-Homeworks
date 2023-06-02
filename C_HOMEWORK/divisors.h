#pragma once

#include "f_utility.h"

typedef struct 
{
	size_t size;
	int* arr;
} int_array_t;

void free_int_array_t(int_array_t* self);
int_array_t* find_div(int n);

int find_div_buffer(int* divs, size_t size, int n);
