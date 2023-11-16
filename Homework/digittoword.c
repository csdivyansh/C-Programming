#include <stdio.h>
int main(){
    int num ,rev=0;
    printf("Enter a number: \n");
    scanf("%d",&num);
    int temp=num;
    while (temp!=0){
        int rem=temp%10;
        rev=(rev*10)+rem;
        temp=temp/10;
    }
    printf("%d",rev);
    return 0;
}