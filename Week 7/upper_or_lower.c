#include <stdio.h>
int main() 
{
	//Upper or lower triangular matrix
	int m,n,i,j,upper=0,lower=0;
	printf("Enter number of rows: ");
	scanf("%d",&m);
	printf("Enter number of cols: ");
	scanf("%d",&n);
	int no_of_elements=m*n;
	int matrix[m][n];

	printf("Enter Elements:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("for position %d%d: ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	
	printf("\nYour Matrix:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			printf("%d\t",matrix[i][j]);
		printf("\n");
	}
	/*
	       11  12  13  upper => when i>j && matrix[i][j]==0
	       21  22  23  lower => when i<j && matrix[i][j]==0
	       31  32  33
	*/
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if (i>j && matrix[i][j]==0)
				upper=1;
			if (i<j && matrix[i][j]==0)
				lower=1;
		}
	}
	if(upper){
		printf("\nIt is an upper triangular matrix!");
	}
	else if(lower){
		printf("\nIt is a lower triangular matrix!");
	}
	else{
		printf("\nIt is a regular matrix!");
	}
	return 0;
}