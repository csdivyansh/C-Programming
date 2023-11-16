#include <stdio.h>
int main()
{
    float h,b,area;
    printf("Enter the base and height of a triangle: ");
    scanf("%f%f",&h,&b);
    area=(h*b)/2;
    printf("The area of triangle is: %.1f", area);
    return 0;
}