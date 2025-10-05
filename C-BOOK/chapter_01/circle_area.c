#include <stdio.h>

int main() {
    float radius;
    double area;

    printf("\n Enter the radius of the circle : ");
    scanf("%f", &radius);
    
    area = 3.14 * radius * radius;
    printf("\nThe area of a circle with radius %.2f is: %.2lf\n", radius, area);
    
    return 0;
}