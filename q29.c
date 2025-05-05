//// Write a C program that checks whether a number entered by the user is a prime number or not. Use a for loop.
#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Please enter a number greater than 1.\n");
    } else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = 0;  // found a divisor
                break;
            }
        }

        if (isPrime)
            printf("The number is prime.\n");
        else
            printf("The number is not prime.\n");

        printf("Thank You!\n");
    }

    return 0;
}
