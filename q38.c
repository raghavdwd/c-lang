// Write a C program that uses a recursive function to calculate the sum of digits of a number entered by the user.

// For example:

// Input: 1234

// Output: 10 (because 1 + 2 + 3 + 4 = 10)

// Use recursion only in the function that calculates the sum.

#include <stdio.h>

int sum(int n);

int main(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int result = sum(number);
    printf("Sum of digits: %d\n", result);
    
    return 0;
}

int sum(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + sum(n / 10);
}
