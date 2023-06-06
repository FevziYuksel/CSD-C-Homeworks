#ifndef _C_HOMEWORK_
#define _C_HOMEWORK_

#include "f_utility.h"
#include "divisors.h"

int lcd(int a, int b);
int gcd(int a, int b);
int gcd2(int a, int b);
int gcd_basic(int a, int b);
int gcd_euclid_recursive(int a, int b);
int gcd_euclid_loop(int a, int b); /*-o3 build has bug*/
void find_harshad(int until);
int smith_number(int n);
int is_smith(int n);
int is_ramanujan(int n);
int is_superprime(int n);
int knut(void);

void test41(void);
void test50(void);
void test52(void);
void test53(void);
void test54(void);
void test56(void);
void test57(void);

void test81(void);

#endif // _C_HOMEWORK_

