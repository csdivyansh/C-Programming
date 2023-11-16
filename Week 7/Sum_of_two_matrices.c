#include <stdio.h>
int main() {
	//Addition of two matrices.
    int r,c,i,j;

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of cols: ");
    scanf("%d", &c);

	int first[r][c], second[r][c], result[r][c];
	
    printf("\nEnter elements for matrix 1:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("Enter element for position %d%d: ", i + 1, j + 1);
            scanf("%d", &first[i][j]);
        }
    }

    printf("\nEnter elements for matrix 2:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("Enter element for position %d%d: ", i + 1, j + 1);
            scanf("%d", &second[i][j]);
        }
    }

    for (i = 0; i < r; ++i) {
    	result[i][j] = 0;
        for (j = 0; j < c; ++j) {
            result[i][j] = first[i][j] + second[i][j];
        }
    }

    printf("\nMatrix after Addition:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
