// https://projecteuler.net/problem=4

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

int str_len(char* str);
int is_palendrome(int n);

int str_len(char* str)
{
    int str_len = 0;
    char* str_p;

    /* start at the memory address of first index in str,
     * continue while value stored in the memory address isn't a null terminator,
     * increment the pointer to move to next position in memory. */
    for (str_p = &str[0]; *str_p; str_p++)
    {
        str_len++;
    }
    return str_len;
}

bool is_palendrome(int n)
{
    int s_len;
    char str_n[64];

    sprintf(str_n, "%d", n); // int to str

    s_len = str_len(str_n);
    if (s_len % 2) --s_len; // If odd, ignore middle char

    for (int i = 0; i <= (s_len/2)-1; ++i) // remove 1 from str len for 0 index
    {
        if ((int)str_n[i] != (int)str_n[s_len-i]) return FALSE;
    }

    return TRUE;
}

int find_multiples(int max) {

    for (int i = max; i > 0; --i)
    {
        for (int j = max; j > 0; --j)
        {
            int sum = i * j;
            if (is_palendrome(sum)) return sum;
        }
    }
    return 0;
}

int main(void)
{
    int max = 9999;
    printf("%d\n", find_multiples(max));

    return 0;
}
