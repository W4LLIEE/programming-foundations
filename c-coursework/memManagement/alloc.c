#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int *arr;        // Pointer to store dynamically allocated memory
    int n;           // Number of elements to allocate

    // Ask user for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory for n integers
    arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Take input values from the user
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the stored values
    printf("Stored elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Free the allocated memory
    free(arr);

    // Set pointer to NULL to avoid wild pointer
    arr = NULL;

    return 0;
}
