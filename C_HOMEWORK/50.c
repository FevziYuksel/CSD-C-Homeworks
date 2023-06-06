#include "f_utility.h"

#define PRINT(x) (printf("result is %d\n", x))
#define LOOKUP(x, lookup) (lookup[x] != 0 ? lookup[x] : (lookup[x] = CUBE(x)))
#define TEST(a, b, c, d) // (printf("1:%d 2:%d 3:%d 4:%d\n", i, j, c1, c2))

int is_ramanujan_dynamic(int n, int* lookup, size_t size)
{
    int c = 0;
    for (int i = 0; i * i < n; i++)
    {
        for (int j = i; j * j < n; j++)
            if (LOOKUP(i, lookup) + LOOKUP(j, lookup) == n)
                ++c;
    }

    return c > 1;
}

int find_ramanujan_dynamic(int start)
{
    size_t size = (size_t)(sqrt(start) + 1.);
    int* lookup = (int*)calloc(size, sizeof(int));
    if (!lookup)
        exit(0);

    for (int i = 0; i < start; i++)
    {
        if (is_ramanujan_dynamic(i, lookup, size))
            PRINT(i);
    }

    free(lookup);
}

int is_ramanujan2(int n)
{
    int c = 0, c1 = -1, c2 = -1;
    for (int i = 0; i * i < n; i++)
    {
        for (int j = 0; j * j < n; j++)
        {
            if (i != j && c1 != j && c2 != i && n == CUBE(i) + CUBE(j))
            {
                //++c, ++i, ++j;
                ++c, c1 = i, c2 = j;
                TEST(i, j, c1, c2);
            }
        }
    }

    return c > 1;
}

int is_ramanujan(int n)
{
    int c = 0;
    for (int i = 0; i * i < n; i++)
    {
        for (int j = i; j * j < n; j++)
            if (n == CUBE(i) + CUBE(j)) ++c;
    }

    return c > 1;
}

int find_ramanujan(int start)
{
    for (int i = 0; i < start; i++)
    {
        if (is_ramanujan(i))
            PRINT(i);
    }
    return 0;

}

void test50(void)
{
    //PRINT(is_ramanujan(1000));
    find_ramanujan(100'000);
    find_ramanujan_dynamic(100'000);
    
}