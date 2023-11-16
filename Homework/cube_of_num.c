#include <stdio.h>
int main()
{
    float num,cube;

    printf("Enter a number: ");
    scanf("%f",&num);

    cube=num*num*num;

    printf("The cube of number is: %.2f", cube);

    return 0;
}