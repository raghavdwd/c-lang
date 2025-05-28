#include <stdio.h>

int arr[4] = {3, 6, 4, 8};

// Function to get the largest number
int getLargestNumber(int arr[], int size) {
    int largest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main(int argc, char const *argv[])
{
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = getLargestNumber(arr, size);
    printf("Largest number: %d\n", largest);
    return 0;
}
