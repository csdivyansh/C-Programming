#include <stdio.h>
int main() {
	// Row major and column major in matrix
	int m,n,i,j;
	printf("Enter number of rows: ");
	scanf("%d",&m);
	printf("Enter number of cols: ");
	scanf("%d",&n);
	int matrix[m][n];

	printf("Enter Elements:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("for position %d%d: ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	
	printf("Row major matrix:\n");
	for(i=0;i<m;i++){ //row
		for(j=0;j<n;j++)//col
			printf("%d\t",matrix[i][j]);
		printf("\n");
	}
	
	printf("Column major matrix:\n");
	for(i=0;i<n;i++){ //col
		for(j=0;j<m;j++)//row
			printf("%d\t",matrix[j][i]);
		printf("\n");
	}
	return 0;
}