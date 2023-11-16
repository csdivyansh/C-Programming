#include <stdio.h>
int main() {
	// Sum of each row and each column in matrix
	int m,n,i,j,sum;
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
	
	for(i=0;i<m;i++){ //row
		sum=0;
		for(j=0;j<n;j++){ //col
			sum+=matrix[i][j];
		}
		printf("\nSum of row %d = %d",i+1,sum);
	}
	
	for(i=0;i<n;i++){ //col
		sum=0;
		for(j=0;j<m;j++){ //row
			sum+=matrix[j][i];
		}
		printf("\nSum of column %d = %d",j+1,sum);
	}
	return 0;
}