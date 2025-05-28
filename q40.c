//write a function to count the number of odd numbers in an array

#include <stdio.h>

int main() {
    int array[6] = {45,34,56,54,55,45};
    int oddNums = 0;

    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
        if(array[i] % 2 != 0){
            oddNums++;
        }
    }

    printf(" The odd numbers in array is: %d", oddNums);

    return 0;
}


