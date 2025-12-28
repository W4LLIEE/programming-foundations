#include <stdio.h>

enum Menu {
    ADD = 1,
    LIST,
    EXIT
};

int main(void) {
    int choice;

    printf("Menu:\n");
    printf("1. Add\n");
    printf("2. List\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch ((enum Menu)choice) {
        case ADD:
            printf("Add option selected.\n");
            break;

        case LIST:
            printf("List option selected.\n");
            break;

        case EXIT:
            printf("Exit option selected.\n");
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
