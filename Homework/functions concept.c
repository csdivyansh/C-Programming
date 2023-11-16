#include <stdio.h> 
#include <math.h>

void Prime(){ 
	int num,flag = 1;
	printf("Enter to check prime: "); 
	scanf("%d",&num);
	for (int i=2; i<=num/2;i++) { 
		if (num%i== 0) { 
			flag = 0; 
			break; 
		} 
	} 
	if (flag) { 
		printf("The number %d is a Prime Number\n", num); 
	} 
	else { 
		printf("The number %d is not a Prime Number\n", num); 
	} 
	return; 
} 

void Strong(){
	int num,rem,i,fact,copy,sum=0;
    
    printf("\nEnter a to check strong: \n");
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
}

void Palindrome(){
	int num,rev=0,copy,rem=0;
	printf("Enter to check if palindrome: ");
	scanf("%d",&num);
	copy=num;
	while(num>0){
		rem=num%10;
		rev=(rev*10)+rem;
		num/=10;
	}
	if(rev==copy){
		printf("Palindrome!");
	}
	else{
		printf("Not Palindrome!");
	}
}

void Armstrong(){
	int num,arms=0,rem=0,count=0,copy;
	printf("Enter a number to check armstrong: ");
	scanf("%d",&num);
	copy=num;
	while(copy>0){
		count++;
		copy/=10;
	}
	copy=num;
	while(copy>0){
		rem=copy%10;
		arms=arms+pow(rem,count);
		copy/=10;
	}
	if(arms==num){
		printf("Armstrong!");
	}
	else{
		printf("Not Armstrong!");
	}
}

int main(){
	Armstrong();
	Palindrome();
	Strong(); 
	Prime();
	return 0;
}