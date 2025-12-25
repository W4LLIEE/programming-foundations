#include <stdio.h>

// Define strlen function.

void strLen(char *ptr, int *len) {
    while (*ptr != '\0') {
        if (*ptr == ' ') {
            ptr++;
            continue;
        }
        ptr++;
        (*len)++;
    }
}

int main() {

    char name[25];
    int len = -1;

    puts("Enter your name");
    fgets(name, sizeof(name), stdin);

    strLen(name, &len);

    printf("Your name has %d letters (excluding spaces).\n", len);

    return 0;

}