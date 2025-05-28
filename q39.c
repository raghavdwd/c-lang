#include <stdio.h>


int main(){
    float array[3];
    printf("Enter price of apple: ");
    scanf("%f", &array[0]);
    printf("Enter price of orange: ");
    scanf("%f", &array[1]);
    printf("Enter price of banana: ");
    scanf("%f", &array[2]);
     
    float total = 0;
    for (int i = 0; i < 3; i++){
        total += array[i];
    }
    printf("Total price: %.2f\n", total);
    int addingGST = total*18/100;
    printf("Total price with GST: %.2f\n", total + addingGST);
    return 0;
}