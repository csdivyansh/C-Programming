#include <stdio.h>
int main(){
	int len,j,k=0;
	char name[100],rev[100];
	printf("Enter a string: ");
	gets(name);
	for(len=0;name[len]!='\0';len++);
	for(j=len-1;j>=0; j--){
		rev[k]=name[j];
		k++;
	}
	printf("Reversed string: %s",rev);
	return 0;	
}
