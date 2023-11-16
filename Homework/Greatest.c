#include <stdio.h>
int main()
{
    float num1,num2, num3; 
    printf("Enter value of numl, num2, num3 one by one:"); 
    scanf("%f%f%f",&num1, &num2, &num3);
    if (num1>num2 && num1>num3){
        printf("the greatest number is: %.1f",num1);
    }
    else if(num2>num1 && num2>num3){
        printf("the greatest number is: %.1f",num2);
    }   
    else{
        printf("the greatest number is: %.1f",num3);
    }
}