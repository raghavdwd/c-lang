//Write a C program that calculates the sum of the first n natural numbers using a for loop.
#include <stdio.h>

int main(){
    int n;
    int sum = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n<0) printf("Number cant be negative.");
    else{
        for(int i =0; i<=n; i++  ){
            sum = sum+i;
        }
        printf("The sum of n natural numbrs is: %d \n", sum);
        printf("ThankYou! \n");
    }
    return 0;
}