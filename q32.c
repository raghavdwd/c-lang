#include <stdio.h>

void printHello();
void printGoodBye();

int main(){
    printHello();
    printGoodBye();
    return 0;
}

void printHello(){
    printf("hello world \n");
}
void printGoodBye(){
    printf("Good Bye! \n");
}