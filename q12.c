#include <stdio.h>
#include <ctype.h>  // Required for toupper() and isupper()

int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter a single character: ");
    scanf(" %c", &ch);  // Note the space before %c to consume any leftover whitespace

    if(isupper(ch)){
        printf("The character is in uppercase.\n");
    } else {
        printf("The character is not in uppercase. Its uppercase version is: %c\n", toupper(ch));
    }

    return 0;
}
