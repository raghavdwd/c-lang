// Write a C program that reverses the digits of a number entered by the user. (e.g., input 1234 → output 4321)

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, reversed = 0;
    printf("Please enter the number: ");
    scanf("%d", &num);
    
    while (num != 0) {
        int digit = num % 10;      
        reversed = reversed * 10 + digit; 
        num = num / 10;             
    }

    printf("Reversed number is: %d\n", reversed);
    
    return 0;
}
