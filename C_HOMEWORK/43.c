#include "fy_utility.h"

int days_in_february(int year) 
{
    return isleap(year) ? 29 : 28;
}

int days_in_year(int year) 
{
    return isleap(year) ? 366 : 365;
}

int fy_max(int x, int y) 
{
    return x > y ? x : y;
}

int fy_min(int x, int y) 
{
    return x < y ? x : y;
}

int fy_abs(int x) 
{
    return x < 0 ? -x : x;
}

int fy_signum(int x)
{
    return x > 0 ? 1 : (x < 0 ? -1 : 0);
}

void test43(void) 
{
    int year = 2023;
    int february_days = days_in_february(year);
    int year_days = days_in_year(year);
    int x = -5;
    int y = 10;
    int max_value = fy_max(x, y);
    int min_value = fy_min(x, y);
    int abs_value = fy_abs(x);
    int sign_value = fy_signum(x);

    printf("Subat ayinin gun sayisi: %d\n", february_days);
    printf("Yilin gun sayisi: %d\n", year_days);
    printf("x ve y'nin buyugu: %d\n", max_value);
    printf("x ve y'nin kucugu: %d\n", min_value);
    printf("x'in mutlak degeri: %d\n", abs_value);
    printf("x'in isaret degeri: %d\n", sign_value);

    return 0;
}