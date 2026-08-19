// Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

int main()
 {
    float radius, area, circumference;
    const float PI = 3.14159f;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area of circle: %.2f\n", area);
    printf("Circumference of circle: %.2f\n", circumference);

    return 0;
}