#include <stdio.h>

int main()
{
    int days,years,weeks,months;
    printf("Enter the number of days: ");
    scanf("%d", &days);

    years=days/365;
    weeks=days/7;
    months=days/30;

    printf("No. of years = %d\n",years);
    printf("No. of months = %d\n",months);
    printf("No. of weeks = %d",weeks);
    
    return 0;
}
