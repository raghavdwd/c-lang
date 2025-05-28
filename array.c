//array - collection of similar data types stored a contiguous memory locations

//syntax

//int marks[3], where 3 is size of array

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int marks[3];

    printf("Enter Physics: ");
    scanf("%d", &marks[0]);

    printf("Enter Maths: ");
    scanf("%d", &marks[1]);

    printf("Enter Chemistry: ");
    scanf("%d", &marks[2]);
    printf("Physics = %d, Maths = %d, Chemistry = %d\n", marks[0], marks[1], marks[2]);

    return 0;
}

//initialization of array

//int marks[] = {57,45,22}
//int marks[3]= {44,54,45}

