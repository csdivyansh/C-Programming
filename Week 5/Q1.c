#include <stdio.h>
int main()
{
    int n=10;
    for(int i=1;i<=n;i++){
        for (int j=n;j>=i;--j){
            printf(" ");
        }
        for (int j=1;j<=i;++j){
            if(i==1||j==1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
    }
    return 0;
}
