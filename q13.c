#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = num; i >= 0; i--)
    {
        printf("%d\n", i);  // Correct newline
    }

    return 0;
}
