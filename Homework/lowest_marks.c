#include <stdio.h>
int main()
{
    float m1,m2, m3; 

    printf("Enter Marks of first student: "); 
    scanf("%f",&m1);
    printf("Enter Marks of second student: "); 
    scanf("%f",&m2);
    printf("Enter Marks of third student: "); 
    scanf("%f",&m3);

    if (m1<m2 && m1<m3){
        printf("The lowest marks is: %.1f",m1);
    }
    else if(m2<m1 && m2<m3){
        printf("The lowest marks is: %.1f",m2);
    }   
    else{
        printf("The lowest marks is: %.1f",m3);
    }
}