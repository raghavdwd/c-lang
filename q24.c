// Write a C program that prints only the even numbers from 1 to 50 using a for loop.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 50; i++)
    {
        if (i%2 == 0)
        {
           printf("%d \n", i);
        }
        
    }
    
    return 0;
}
