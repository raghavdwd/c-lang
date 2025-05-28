//in an array find how many times a number n occurs


#include <stdio.h>

int arr[6] = {3,4,5,6,5,4};


int main(int argc, char const *argv[])
{

    int n = 5;
    int count = 0;
     int size = sizeof(arr) / sizeof(arr[0]); 
    for (size_t i = 0; i < size; i++)
    {
        if(arr[i]= n){
            count++;
        }
    }
    printf("%d \n", count);
    

    
    return 0;
}
