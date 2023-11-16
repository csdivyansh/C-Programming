#include <stdio.h>

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("\nEnter the coefficients(a, b, c): ");
    scanf("%f %f %f", &a, &b, &c);

    float d = b * b - 4 * a * c;

    if (d < 0) {
        printf("The equation has complex roots.\n");
    } else {
        float root1 = (-b + sqrt(d)) / (2 * a);
        float root2 = (-b - sqrt(d)) / (2 * a);
        printf("The real roots of the equation are: %.2f and %.2f", root1, root2);
    }

    return 0;
}
