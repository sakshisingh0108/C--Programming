#include <stdio.h>

// Call by value
void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;

    printf("Inside call by value: a = %d, b = %d\n", a, b);
}

// Swapping using pointers
void swapUsingPointers(int *c, int *d)
{
    int e = *c;
    *c = *d;
    *d = e;

    printf("Inside pointer-based swap: c = %d, d = %d\n", *c, *d);
}

int main()
{
    int x, y;

    printf("Enter two numbers for call by value:\n");
    scanf("%d %d", &x, &y);

    swap(x, y);
    printf("After call by value: x = %d, y = %d\n", x, y);

    int p, q;

    printf("\nEnter two numbers for pointer-based swap:\n");
    scanf("%d %d", &p, &q);

    swapUsingPointers(&p, &q);
    printf("After pointer-based swap: p = %d, q = %d\n", p, q);

    return 0;
}
