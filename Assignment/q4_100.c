#include <stdio.h>
#define PI 3.14159265359
int main() 
{
    float r, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    area = PI * r * r;
    circumference = 2.0 * PI * r;

    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);
    return 0;
}
