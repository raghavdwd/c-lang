// Write a C program that prints the Fibonacci series up to n numbers, where n is input by the user.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int a = 0, b = 1, next;
    int i = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");
    while ( i <=n)
    {
        printf("%d\n", a);
        next = a + b;
        a = b;
        b = next;
        i++;
    }
   
    printf("thank you!");
    
    return 0;
}
