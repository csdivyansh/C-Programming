#include <stdio.h>
int main()
{
    int num,rem,i,fact,copy,sum=0;
    
    printf("\nEnter a number: \n");
    scanf("%d",&num);
    
    copy=num;
    sum=0;
    while (num>0){
        fact=1;
        rem=num%10;
        for(i=1;i<=rem;i++){
            fact=fact*i;
        }
        sum+=fact;
        num=num/10;
    }

    if(sum==copy){
        printf("The Given Number is Strong number.\n");
    }
    else{
        printf("The Given Number is not strong number.\n");
    }
    
    return 0;
}
