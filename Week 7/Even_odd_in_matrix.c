#include <stdio.h>
int main() {
	// No of odd and even in matrix
	int m,n,i,j,odd=0,even=0;
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
			if(matrix[i][j]%2==0){
				even++;
			}
			else{
				odd++;
			}
		}
	}
	
	printf("Frequency of even no in matrix is: %d\n",even);
	printf("Frequency of odd no in matrix is: %d",odd);
	return 0;
}