// Write a C program to calculate the sum of all even numbers between 1 and n (where n is input by the user). Use a for loop.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int sum =0;
    printf("Enter the number:  ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i+=2)
    {
        sum = sum+ i;
    }
     
    printf("Sum is: %d", sum);
    
    return 0;
}
