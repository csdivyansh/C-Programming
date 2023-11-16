#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	//hackerrank for loop
    int i,j,n;
    scanf("%d", &n);
  	for (i=0;i<n+1;i++){
          for(j=0;j<i;j++){
              if(i==1 && j==1){
                  printf("%d",n-1);
              }
              else{
                  printf("%d",n);
              }
          }
          printf("\n");
      }
    return 0;
}