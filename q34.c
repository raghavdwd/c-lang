//factorial of n through recursion

#include <stdio.h>

int fact(int n);

int main(int argc, char const *argv[])
{
    printf("factorial is: %d \n", fact(5));
    return 0;
}

int fact(int n){
    if(n==0){
        return 1;
    }
    int factNum1 = fact(n-1);
    int factN = factNum1 *n;
    return factN;
}