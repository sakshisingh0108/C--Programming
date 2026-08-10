#include <stdio.h>

int countOdd(int arr[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int num[n];

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("Number of odd elements: %d\n", countOdd(num, n));

    return 0;
}
