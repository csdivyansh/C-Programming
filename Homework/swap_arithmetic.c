#include <stdio.h>
int main()
{
    int a,b,tmp;
    printf("Write a = ");
    scanf("%d",&a);
    printf("Write b = ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a= %d,b= %d",a,b);
    return 0;
}