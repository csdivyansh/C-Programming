#include <stdio.h>

int main()
{
    float vol,r;
    printf("\nEnter radius: \n");
    scanf("%f",&r);

    vol=1.33*3.14*r*r*r;
    
    printf("Volume of Sphere is = %.3f\n",vol);

    return 0;
}
