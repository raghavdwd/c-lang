//write a function that prints namaste id user is indian and bonjour if the user is french...

#include <stdio.h>

void printNamaste();
void printBonjour();


int main(){
    char nationality; // i-indian f -french
    printf("Where do you live??");
    scanf("%c", &nationality);
    if (nationality == 'i')
    {
        printNamaste();
    }else if(nationality == 'f')
    {
        printBonjour();
    }else{
        printf("I seriously dont know! \n");
    }
    return 0;
}

void printNamaste(){
    printf("Namaste Dosto! \n");
}

void printBonjour(){
    printf("Hola! Bonjour! \n");
}