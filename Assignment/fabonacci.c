#include <stdio.h>
int main()
{
    int n,a=0,b=1,c;

    printf("\nEnter the number of terms: \n");
    scanf("%d",&n);

    printf("0,");

    while(a<=n){
        a=b;
        b=c;
        c=a+b;
        if(a!=n){
            printf("%d,",c);
        }
        else{
            printf("%d",c);
        }
        a++;
    }
    return 0;
}
