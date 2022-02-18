//ÆÑÅä¸®¾ó Àç±Í
#include <stdio.h>

int factorial(int a, int sum)
{
    if (a <= 1) return sum;
    sum *= a;
    factorial(a - 1, sum);
}

int main()
{
    int N = 0, sum = 1;
    while (1)
    {
        scanf("%d", &N);
        if (0 <= N <= 12) break;
    }

    printf("%d", factorial(N, sum));

}