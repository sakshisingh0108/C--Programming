#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of terms (1-20): ");
    scanf("%d", &n);

    if (n < 1 || n > 20)
    {
        printf("Please enter a number between 1 and 20.\n");
        return 1;
    }

    int fib[20];

    fib[0] = 0;

    if (n > 1)
        fib[1] = 1;

    printf("Fibonacci series:\n");

    for (int i = 0; i < n; i++)
    {
        if (i > 1)
            fib[i] = fib[i - 1] + fib[i - 2];

        printf("%d ", fib[i]);
    }

    printf("\n");

    return 0;
}
