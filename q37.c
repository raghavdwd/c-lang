// Write a C program that uses a function to reverse the digits of a number using a while loop.

// Input: 1234

// Output: 4321

// Use a function for reversing.

// Pass the number to the function by value, not pointer.

#include <stdio.h>

int reverse(int n);

int main(void)
{ 
    printf("%d\n", reverse(199)); 
    return 0;
}

int reverse(int n){
    int reversed = 0;
    while (n != 0)
    {   
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }
    return reversed;
}
