#include <stdio.h>

void swap(int *ptrX, int *ptrY) {

    int temp = *ptrX; 
    *ptrX = *ptrY;
    *ptrY = temp;

}

int main() {

    int x = 10, y = 5;
    
    printf("Original: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("Swapped: x = %d, y = %d\n", x, y);

    return 0;

}

