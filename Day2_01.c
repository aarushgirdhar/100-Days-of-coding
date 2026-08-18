#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;

    printf("Enter length of rectangle: ");
    scanf("%f", &length);

    printf("Enter breadth of rectangle: ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("\nArea = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}
