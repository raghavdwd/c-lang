#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if(age < 0)
    {
        printf("You are not born yet\n");
        printf("You can watch nothing\n");
    }
    else if(age < 5)
    {
        printf("You are a baby\n");
        printf("You can watch baby shows\n");
    }
    else if(age < 10)
    {
        printf("You are a toddler\n");
        printf("You can watch PG movies\n");
    }
    else if(age < 13)
    {
        printf("You are a child\n");
        printf("You can watch G movies\n");
    }
    else if(age < 16)
    {
        printf("You are a preteen\n");
        printf("You can watch PG-13 movies\n");
    }
    else if(age < 18)
    {
        printf("You are a teenager\n");
        printf("You can drive\n");
    }
    else
    {
        printf("You are an adult\n");
        printf("You can vote\n");
        printf("You can drive\n");

        if(age < 21)
        {
            printf("You are a young adult\n");
            printf("You cannot drink alcohol\n");
        }
        else
        {
            printf("You can drink alcohol\n");
        }

        if(age >= 100)
        {
            printf("You are a centenarian\n");
            printf("You can get centenarian discounts\n");
        }
        else if(age >= 80)
        {
            printf("You are a super senior citizen\n");
            printf("You can get super senior citizen discounts\n");
        }
        else if(age >= 60)
        {
            printf("You are a senior citizen\n");
            printf("You can get senior citizen discounts\n");
        }
    }

    return 0;
}
