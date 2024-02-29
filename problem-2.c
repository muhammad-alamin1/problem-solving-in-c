#include <stdio.h>

int factorial(int a);

int main(void)
{
    unsigned int a, b;
    long long int sum = 0;

    printf("Enter two number: ");
    scanf("%u%u", &a, &b);

    sum = factorial(a) + factorial(b);

    printf("Sum of Factorial: %lld\n", sum);

    return 0;
}

// factorial
int factorial(int a)
{
    if(a == 0)
        return 1;
    else
        return a * factorial(a - 1);
}
