#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age =18;
    int *ptr = &age;
    int _age = *ptr;

    printf("%d \n", _age);
    return 0;
}
