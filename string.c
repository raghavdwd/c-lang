#include <stdio.h>

int main(int argc, char const *argv[])
{
    char firstName[] = "Raghav";
    char lastName[] = "Dwivedi";
    printString(firstName);
    printString(lastName);

    return 0;
}


void printString(char arr[]){
    for (size_t i = 0; arr[i]!='\0'; i++)
    {
        printf("%c", arr[i]);
    }

    printf("\n");
    
}
