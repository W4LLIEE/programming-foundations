#include <stdio.h>

int main() {
    
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, i = 0, size;
    size = sizeof(arr)/sizeof(arr[0]);
    int *ptrA = arr;

    ptrA += (size-1);
    
    printf("\n\nReversed: ");

    while (i<size) {
        printf("%d", *ptrA);
        i++;
        ptrA--;
    }
    
    printf("\n");
    
    return 0;

}