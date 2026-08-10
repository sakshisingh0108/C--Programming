#include <stdio.h>
#include <math.h>

int main()
{
    float R1, R2, imag, real, a, b, c, D;

    printf("Enter a, b, c:\n");
    scanf("%f %f %f", &a, &b, &c);

    D = b * b - 4 * a * c;

    if (D > 0)
    {
        R1 = (-b + sqrt(D)) / (2 * a);
        R2 = (-b - sqrt(D)) / (2 * a);

        printf("Roots are real and distinct: %.2f, %.2f", R1, R2);
    }

    else if (D == 0)
    {
        R1 = R2 = -b / (2 * a);

        printf("Roots are real and same: %.2f, %.2f", R1, R2);
    }

    else
    {
        real = -b / (2 * a);
        imag = sqrt(-D) / (2 * a);

        printf("Roots are complex: %.2f + %.2fi, %.2f - %.2fi",
               real, imag, real, imag);
    }

    return 0;
}
