#include <stdio.h>
#include <string.h>

// Define manual strcmp function

void strCmp(char *str1, char *str2, int max, int *cmp, int *ltr) {
    
    for (int i = 0; i < max; i++) {
        if (*str1 == *str2) {
            *cmp = 0;
            str1++;
            str2++;
            (*ltr)++;
        } else
            *cmp = ((*str1) - (*str2));
    
    }

}

int main() {

    char str1[50], str2[50];
    int max, cmp, letter = 1;

    // Take input strings

    printf("\nEnter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("\nEnter second string: ");
    fgets(str2, sizeof(str1), stdin);

    // Find max length of strings

    if (strlen(str1) > strlen(str2))
        max = strlen(str1);
    else
        max = strlen(str2);
    

    // Call strCmp function

    strCmp(str1, str2, max, &cmp, &letter);

    //Different outputs for different values
    
    if (cmp == 0)
        printf("\nStr1 and str2 are the same.\n\n");
    else if (cmp < 0)
        printf("\nLetter #%d in str1 is %d from letter #%d in str2.\n\n", letter, cmp, letter);
    else
        printf("\nLetter #%d in str1 is +%d from letter #%d in str2.\n\n", letter, cmp, letter);

    return 0;

}