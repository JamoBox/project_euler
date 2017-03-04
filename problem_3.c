// https://projecteuler.net/problem=3

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int is_prime(int n);
int largest_pf(long n);

int is_prime(int n)
{
    for (int i = 2; (i <= n); ++i)
    {
        if (n == i) return TRUE;
        else if (n % i == 0) return FALSE;
    }
    return FALSE;
}

int largest_pf(long n)
{
    long n_factor = n;
    int largest_prime = 0;
    for (int i = 2; i <= n_factor; ++i) {
        if (is_prime(i) && (n % i == 0))
        {
            if (i > largest_prime) largest_prime = i;
            n_factor = n/i;
            if (!is_prime(n_factor)) return largest_pf(n_factor);
        }
    }
    return largest_prime;
}

int main(void)
{
    long num = 600851475143;
    printf("%d\n", largest_pf(num));

    return 0;
}
