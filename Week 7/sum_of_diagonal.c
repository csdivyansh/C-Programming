#include <stdio.h>
int main() {
	// Sum of upper,lower and diagonal elements in matrix.
	int m,n,i,j,diag=0,upper=0,lower=0;
	printf("Enter order of matrix(rows and cols): ");
	scanf("%d",&m);
	int matrix[m][m];

	printf("\nEnter Elements:\n");
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("For position %d%d: ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			if(i==j)
				diag+=matrix[i][j];
			if(i<j)
				upper+=matrix[i][j];
			if(i>j)
				lower+=matrix[i][j];
		}
	}	
	
	printf("\nYour Matrix:\n");
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("%d \t",matrix[i][j]);
		}
		printf("\n");
	}
	printf("\nSum of diagonal elements is: %d",diag);
	printf("\nSum of upper elements is: %d",upper);
	printf("\nSum of lower elements is: %d",lower);	
	return 0;
}