#include <stdio.h>
int main()
{
    int year;
    do{
        printf("\nEnter a year to check if its leap or not: \n");
        scanf("%d",&year);
        if(year>0){
            if (year%400==0 || (year%4==0 && year%100!=0)){
                printf("Its a leap year!\n");
            }
            else{
                printf("Not a leap year!\n");
            }
        }
        else{
            printf("Not a valid input!\n");
        }

    }while(year>0);
    return 0;
}
