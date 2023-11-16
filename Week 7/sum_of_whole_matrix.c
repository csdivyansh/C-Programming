#include <stdio.h>
int main(){
	// Sum of whole matrix
	int m,n,i,j,sum=0;
	printf("Enter number of rows: ");
	scanf("%d",&m);
	printf("Enter number of cols: ");
	scanf("%d",&n);
	int matrix[m][n];
	
	printf("Enter Elements:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("For position %d%d: ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			sum+=matrix[i][j];
		}
	}
	
	printf("Sum of whole matrix is: %d",sum);
	
	return 0;
}