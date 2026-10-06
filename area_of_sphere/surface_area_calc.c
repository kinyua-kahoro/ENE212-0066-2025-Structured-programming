#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("This program calculates the surface area of a sphere!\n");
    float radius;
    const float pi=3.143;
    printf("Please input the radius of your sphere:\n");
    if (scanf("%f", &radius) != 1 || radius < 0) {
        printf("Error: Invalid radius.\n");
        return 1;
    }
    float area=4*pi*radius*radius;
    printf("The surface area of your sphere is:%.2f", area);
    return 0;
}
