#include <stdio.h>
int main(){
   char opr;
   float num1, num2, result = 0;
   printf("Enter an operator(+, -, *, /): ");
   scanf("%c", &opr);
   printf("Enter the num1 and num2 : ");
   scanf("%f%f", &num1, &num2);
   switch(opr){
      case '+': result = num1 + num2;
         break;
      case '-': result = num1 - num2;
         break;
      case '*': result = num1 * num2;
         break;
      case '/': result = num1 / num2;
         break;
      default: printf("Invalid Operator!");
   }
   printf("Answer = %.1f", result);
   return 0;
}