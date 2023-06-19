#define _CRT_SECURE_NO_WARNINGS
#include "homework.h"
#include "list.h"

extern const int a;

extern ptrdiff_t diff;

inline void test(int* in, int* out)
{
	//if (sizeof(in) > sizeof(int))
	//	exit(EXIT_FAILURE);

	printf("success");
}

void print_array5(const int* p, int size, int i) 
{ 
	printf("%d ", (*p + i));
	i < size ? print_array(p, size, i + 1) : 0; 
}
void test_arr_ptr(const int* arr)
{
	for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
}


//int main(void)
//{
//	int arr[5] = { 0, 1, 2, 3, 4 }; 
//	size_t size = 5;
//	
//	//for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//
//}

