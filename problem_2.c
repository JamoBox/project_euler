// https://projecteuler.net/problem=2

#include <stdio.h>


int main(void)
{
    int limiter = 4000000;
    int ans = 0;

    int current = 1;
    int previous = 1;
    int next = 1;

    for (int i = 0;; ++i)
    {
        if (current > limiter) break;

        next = current + previous;
        previous = current;
        current = next;

        if (current % 2 == 0) ans += current;
    }

    printf("%d\n", ans);

    return 0;
}
