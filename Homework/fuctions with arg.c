#include <stdio.h> 
#include <math.h>

void Prime(int num){ 
	int flag = 1;
	for (int i=2; i<=num/2;i++) { 
		if (num%i== 0) { 
			flag = 0; 
			break; 
		} 
	} 
	if (flag) { 
		printf("\nThe number %d is a Prime Number", num); 
	} 
	else { 
		printf("\nThe number %d is not a Prime Number", num); 
	} 
	return; 
} 

void Strong(int num){
	int rem,i,fact,copy,sum=0;
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
        printf("\nThe Given Number is Strong number.");
    }
    else{
        printf("\nThe Given Number is not strong number.");
    }
}

void Palindrome(int num){
	int rev=0,copy,rem=0;
	copy=num;
	while(num>0){
		rem=num%10;
		rev=(rev*10)+rem;
		num/=10;
	}
	if(rev==copy){
		printf("\nPalindrome!");
	}
	else{
		printf("\nNot Palindrome!");
	}
}

void Armstrong(int num){
	int arms=0,rem=0,count=0,copy;
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
		printf("\nArmstrong!");
	}
	else{
		printf("\nNot Armstrong!");
	}
}

int main(){
	Armstrong(153);
	Palindrome(121);
	Strong(145); 
	Prime(5);
	return 0;
}