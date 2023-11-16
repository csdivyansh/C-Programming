#include <stdio.h>
int main(){
    int choice;
    printf("Enter a number: "); 
    scanf("%d",&choice);
    switch(choice%4){
    case 0:printf("sing a song"); 
        break;
    case 1: printf("mimic someone"); 
        break;
    case 2: printf("draw something"); 
        break;
    case 3: printf("say some shayari"); 
        break;
    default: printf("invalid input");
    }
    return 0;
}