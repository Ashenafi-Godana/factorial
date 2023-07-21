#include <stdio.h>

int factorial(int n);

int main(void)
{
    int number;
    printf("Number: ");
    scanf("%d", &number);
    printf("%d\n", factorial(number));
}

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}