#include <stdio.h>

int main(int argc, char const *argv[])
{
    int marks[2][3];
    marks[0][0]= 90;
    marks[0][1]= 80;
    marks[0][2]= 70;

    marks[1][0]= 60;
    marks[1][1]= 50;
    marks[1][2]= 40;

    printf("Physics = %d, Maths = %d, Chemistry = %d\n", marks[0][0], marks[0][1], marks[0][2]);
    printf("Physics = %d, Maths = %d, Chemistry = %d\n", marks[1][0], marks[1][1], marks[1][2]);
    return 0;
}
