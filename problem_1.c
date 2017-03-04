// https://projecteuler.net/problem=1

#include <stdio.h>


int main(void)
{
    int num = 1000;
    int ans = 0;
    for (int i = 0; i < num; ++i)
    {
        if (!(i % 3) || !(i % 5)) ans += i;
    }
    printf("%d\n", ans);
    return 0;
}
