#include "homework.h"


int armstrong(int n, int t)
{
    int res = f_pow(n % 10, t);

    while (n /= 10)
        res += f_pow(n % 10, t);

    return res;
}

int is_armstrong(int n)
{
    return n == armstrong(n, ndigit(n));
}


int armstrong_recursive(int n, int t)
{
    if (!n) return 0;

    return f_pow(n % 10, t) + armstrong(n, t);
}



void test41()
{
    int armstrong_n = 999'999'999;

    while (!is_armstrong(armstrong_n--));

    printf("##########Final test result = %d##########\n", armstrong_n);
}