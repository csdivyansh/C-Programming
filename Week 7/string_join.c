#include <stdio.h>
int main(){
	int i,j;
	char fname[100],lname[50];
	printf("Enter First name: ");
	gets(fname);
	printf("Enter last name: ");
	gets(lname);
	for(i=0;fname[i]!='\0';i++);
	for(j=0;lname[j]!='\0';j++){
		fname[i]=lname[j];
		i++;
	}
	fname[i]='\0';
	printf("Joined string: %s",fname);
	return 0;	
}
