// Write a C program that takes a number from the user and prints its multiplication table up to 10.
// (For example, input 5 → print 5×1=5 to 5×10=50)

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n ;
    printf("enter the number: ");
    scanf("%d", &n);
    for (size_t i = 1; i < 11; i++)
    {
        printf("%d", n*i );
        printf("\n");
    }
    printf("thank You! \n");
    
    return 0;
}
