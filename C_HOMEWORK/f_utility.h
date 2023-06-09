#ifndef _F_UTILITY_
#define _F_UTILITY_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <assert.h>
#include <limits.h>

typedef long long int64;
typedef struct tm sys_time;

//#define LOG 1 tanýmlanmadýysa otomatik 0

#if LOG /*&& !defined LOG*/
#define LOG(x) ((void)printf("$LOG : %d\n", x))
#else
#define LOG(x)  do x; while(0) //scope espace trick without ()
#endif // LOG

#define MAX(x, y)		((x) > (y) ? (x) : (y))
#define MIN(x, y)		((x) < (y) ? (x) : (y))
#define ABS(x)			((x) > 0 ? (x) : (-x))
#define SIGNUM(x)		((x) < 0 ? -1 : ((x) > 0 ? 1 : 0))
#define SQRT(x)			((x) * (x))
#define CUBE(x)			((x) * (x) * (x))
#define ASIZE(arr)		(sizeof(arr) / sizeof(arr[0])) // sizeof(int) non generic
#define RANDOMIZE()		srand(time(NULL));

#define STR(x) #x
#define UNI(a, b) a##b
#if !defined LOG && defined ERG
//void log_varg(char* str, ...);
#endif

#define GEN_MAX_FN(T) T max_##T(T a, T b) \
{\
return a > b ? a : b;\
}

#define SWAP_GENERIC(type) void swap_##type(type* x, type* y) \
{\
	printf(#type " type swap function\n"); \
	type temp = *x; \
	*x = *y; \
	*y = temp; \
}

#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte)  \
  ((byte) & 0x80 ? '1' : '0'), \
  ((byte) & 0x40 ? '1' : '0'), \
  ((byte) & 0x40 ? '1' : '0'), \
  ((byte) & 0x20 ? '1' : '0'), \
  ((byte) & 0x10 ? '1' : '0'), \
  ((byte) & 0x08 ? '1' : '0'), \
  ((byte) & 0x04 ? '1' : '0'), \
  ((byte) & 0x02 ? '1' : '0'), \
  ((byte) & 0x01 ? '1' : '0') 

typedef enum
{
	success = 0, memory
}error;

int isleap(int year);
void print_binary(unsigned int number);
void swap(int* x, int* y);
void xor_swap(int* x, int* y);
int find_max_index(const int* arr, const size_t size);
int find_max(const int* arr, const size_t size);
int f_pow(int n, int t);
long long f_pow64(long long n, long long t);
int ndigit(int n);
long long ndigit64(long long n);
int sum_digit(int n);
int factorial(int n);
int is_prime(int n);
int calculate_factorial(int n);
int get_digital_root(int val);
int is_harshad(int val);
int is_armstrong(int n);
void randomize(void);
void set_random_array(int* arr, const size_t size);
void print_array(const int* arr, const size_t size);
int is_palindrome(const char* word);
int print_distinct(const int* arr, const size_t size);
void bubblesort(int* arr, const size_t size, int (*compare) (int, int));
void binary_search(const int* arr, const size_t size, const int value);




#endif // _F_UTILITY_



