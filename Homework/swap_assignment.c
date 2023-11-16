#include <stdio.h>
int main(){
    int a,b,tmp;
    printf("Write a = ");
    scanf("%d",&a);
    printf("Write b = ");
    scanf("%d",&b);
    tmp=a;
    a=b;
    b=tmp;
    printf("a= %d,b= %d",a,b);
    return 0;
}