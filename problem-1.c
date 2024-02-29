#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num);
void print_prime_in_range(int start, int end);

int main(void)
{
    unsigned int start, end;

    start = 1;
    end = 100;

    print_prime_in_range(start, end);

    return 0;
}

// this function check number is prime
bool is_prime(int num)
{
    unsigned int i;

    if(num <= 1)
        return false;

    for(i = 2; i * i <= num; ++i)
    {
        if(num % i == 0)
            return false;
    }

    return true;
}

// print prime number in a given range
void print_prime_in_range(int start, int end)
{
    unsigned int i;

    printf("Prime number between %d & %d are: \n", start, end);

    for(i = start; i <= end; ++i)
    {
        if(is_prime(i))
            printf("%d ", i);
    }
}
