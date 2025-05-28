#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int fib[n];  // Correct array declaration
    fib[0] = 0;
    fib[1] = 1;

    printf("%d \t%d \t", fib[0], fib[1]); // Print initial values

    for (int i = 2; i <= n; i++) { // Correct comparison
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d \t", fib[i]); // Print each Fibonacci number
    }

    printf("\n"); // Missing semicolon fixed
    return 0;
}
