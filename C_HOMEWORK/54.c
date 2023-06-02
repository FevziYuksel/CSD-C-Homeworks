#include "homework.h"
#include "f_utility.h"

int factorion(int n)
{
    int res = 0;

    while (n)
        res += factorial(n % 10), n /= 10;

    return res;
}

int is_factorion(int n)
{
    return n == factorion(n);
}

void test54()
{
    for (int i = 0; i < 1'000'000; i++)
    {
        if (is_factorion(i))
            printf("%d\n", i);
    }
}

//VS is bugged