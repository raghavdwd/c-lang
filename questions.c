//write a program to check if a number is divisible by 2 or not....
#include <stdio.h>
/*
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter that number: ");
    scanf("%d", &a);
    int isDivisible = a%2 ;
    printf("%d", isDivisible == 0);
    
    return 0;
}
*/

int main(int argc, char const *argv[])
{
    int a;
    printf("enter number:");
    scanf("%d", &a);
    printf("%d", a>9 && a<100 );
    return 0;
}
