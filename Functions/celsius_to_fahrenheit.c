#include <stdio.h>

float convertTemp(float celsius)
{
    float fahrenheit = (celsius * 1.8) + 32;
    return fahrenheit;
}

int main()
{
    float celsius;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    printf("Temperature in Fahrenheit: %.2f", convertTemp(celsius));

    return 0;
}
