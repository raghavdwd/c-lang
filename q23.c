// Write a C program to find the factorial of a number entered by the user using a while loop

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int factorial = 1;
    printf("enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial*i;
    }
    printf("The factorial of number is: %d", factorial, "\n");
    printf("Thank You! \n");
    
    return 0;
}
