#ifndef _F_UTILITY_
#define _F_UTILITY_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <assert.h>
//#include <limits.h>

typedef long long int64;
typedef struct tm sys_time;

//#define LOG 1 tanýmlanmadýysa otomatik 0

#if LOG /*&& !defined LOG*/
#define LOG(x) ((void)printf("$LOG : %d\n", x))
#else
#define LOG(x)  (x)
#endif // LOG

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define CUBE(x) ((x) * (x) * (x))
#define SIZE_INT(arr) (sizeof(arr) / sizeof(int))

#define SIZE_ARR(arr, T) (sizeof)  

#define STR(x) #x
#define UNI(a, b) a##b
#if !defined LOG && defined ERG
void log_varg(char* str, ...);
#endif

#define GEN_MAX_FN(T) T max_##T(T a, T b) \
{\
return a > b ? a : b;\
}

//#undef LOG //macroyu sil

/*
void assert_that(int cond)
{
	assert(cond);
}

void print_predefined(void)
{
	printf("%d\n", __LINE__);
	printf("%s\n", __DATE__);
	printf("%s\n", __TIME__);
	printf("%s\n", __FILE__);

#ifdef _cplusplus__ 
#error ERROR C++ COMPILER
#elif __STDC__
#if LOG
#define LOG(x) ((void)printf("$LOG : %d\n", x))
#else
#define LOG(x)  (x)
#endif // LOG
#endif

#line 666 "devil.c"
	abort();
	exit(0);
}
*/

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


int knut(void);
int print_distinct(const int* arr, const size_t size);

#endif // _F_UTILITY_



