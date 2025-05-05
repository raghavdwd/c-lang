//keep taking numbers as input from user until user enters an odd number

#include <stdio.h>

int main(int argc, char const *argv[])
{
     int n;
    do
    {
       scanf("%d", &n);
       printf("%d\n",n);
       if (n%2 != 0)
       {
        break;
       }
       
    } while (1);
    printf("thank you \n");
    
    return 0;
}
