#include <stdio.h>
int main(){

    int num;

    printf("Enter a number to check if divisible by 2 and 7: ");
    scanf("%d", &num);

    if(num%2==0){
        if (num%7==0){
            printf("Given number is divisible!");
        }
        else{
        printf("Not divisible!");
        }
    }
    else{
        printf("Not divisible!");
    }
    return 0;
}