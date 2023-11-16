#include <stdio.h>

int main() {
    char type;
    int days;
    float fee;

    printf("\nEnter the type of book (A/B): ");
    scanf("%c", &type);

    printf("Enter the number of days the book is borrowed: ");
    scanf("%d", &days);

    if (type == 'A') {
        if (days <= 7) {
            fee = 0;
        } else if (days <= 10) {
            fee = (days - 7) * 2;
        } else {
            fee = (days - 10) * 5 + 6;
        }
    } else if (type == 'B') {
        if (days <= 5) {
            fee = 0;
        } else if (days <= 10) {
            fee = (days - 5) * 5;
        } else {
            fee = (days - 10) * 10 + 25;
        }
    }

    printf("The late fee for the borrowed book is = %.2f\n", fee);

    return 0;
}

