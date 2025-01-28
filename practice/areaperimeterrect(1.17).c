#include <stdio.h>
int main() {
    float length, breadth, area, perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    if (area > perimeter) {
        printf("The area of the rectangle %.2f is greater than its perimeter %.2f\n", area, perimeter);
    } else {
        printf("The area of the rectangle %.2f is not greater than its perimeter %.2f\n", area, perimeter);
    }

    return 0;
}
