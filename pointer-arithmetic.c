//pointers can be incremented and decremented

//case 1: 
/*
   int age =22;
   int *ptr = &age;
   ptr++

*/

//we can also subtract one pointer from another

/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int age = 22;
    int *ptr = &age;
    printf("ptr = %p \n", (void*)ptr);
    ptr++;
    printf("ptr = %p\n", (void*)ptr);
    ptr--;
    printf("ptr= %p\n", (void*)ptr);

    int age2 = 45;
    int _age = 34;
    int *ptr2 = &age2;
    int *_ptr = &_age;

    printf("difference = %ld\n", ptr2 - _ptr);
    _ptr = &age2;
    printf("comparison =%d\n", ptr2 == _ptr);

    return 0;
}
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int aadhar[5];
    
    //input 
    int *ptr = &aadhar[0];
    for (int i = 0; i < 5; i++)
    {
        printf("%d index: ", i);
        scanf("%d", &aadhar[i]);
    }
    
    //output

    for (int i = 0; i < 5; i++)
    {
        printf("%d index %d\n", i , aadhar[i]);
    }
    

    return 0;
}
