//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>

int main()
 {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}