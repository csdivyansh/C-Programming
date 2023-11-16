#include <stdio.h>
int n=5;

int main()
{
    int copy=n;
    for (int i=1;i<=n;i++){
        for(int l=1;l<=copy;l++){
            for(int k=1;k<=copy;k++){
                printf(" ");
            }
        }
        for (int j=n;j>=1;j--){
            printf("%d ",j);
        }
    n--;
    i--;
    printf("\n");

    }
    return 0;
}
