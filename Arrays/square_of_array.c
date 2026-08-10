#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Square of array:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i] * arr[i]);
    }

    return 0;
}
