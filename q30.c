// //Write a C program to count the number of digits in a number entered by the user.
// (For example: input 12345 → output: 5)
// Use a while loop.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int remainder;
    int digits = 1;
    printf("enter the number: ");
    scanf("%d", &n);

    // do
    // {
    //     remainder = n%10;
    //     printf("%d \n", remainder);
    //     digits++;
    //     n= n-remainder;
    //     printf("%d \n", n);
    // } while (remainder==0);

    // printf("%d", digits);

    for (int i = 10; i <= n; i*=10)
    {
       digits++;
    }
    printf("The number contains: %d", digits,"  \n");
    
    

    return 0;
}
