#include <stdio.h>

int main() {
    int a1, d, an,ap,i,sum=0;

    printf("\nEnter the first term: ");
    scanf("%d", &a1);

    printf("Enter the common difference: ");
    scanf("%d", &d);

    printf("Enter the number of terms: ");
    scanf("%d", &an);

    printf("\nThe A.P. series is: ");

    for (i = 0;i<an;i++) {
        ap= a1 + i * d;
        printf("%d,",ap);
        sum = sum + ap;
    }

    printf("\nThe sum of the A.P. series is: %d\n", sum);

    return 0;
}