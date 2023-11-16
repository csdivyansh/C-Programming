#include <stdio.h>
int main() {
	//Sparse matrix
	int m,n,i,j,count_0=0,non_0=0;
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
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(matrix[i][j]==0){
				count_0++;
			}
			else{
				non_0++;
			}
		}
	}
	printf("\nYour Matrix:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			printf("%d\t",matrix[i][j]);
		printf("\n");
	}
	if(non_0<count_0){
		printf("\a\nIts a sparse matrix!");
	}
	else{
		printf("\nIts not a sparse matrix.");
	}
	return 0;
}