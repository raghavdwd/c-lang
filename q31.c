//Write a C program to find the greatest (maximum) of three numbers entered by the user using if statements.
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Please enter first number: ");
    scanf("%d", &a);
    printf("Please enter second number: ");
    scanf("%d", &b);
    printf("Please enter third number: ");
    scanf("%d", &c);

    if (a >= b && a >= c) {
        printf("Greatest Number: %d\n", a);
    } else if (b >= a && b >= c) {
        printf("Greatest Number: %d\n", b);
    } else {
        printf("Greatest Number: %d\n", c);
    }

    return 0;
}
