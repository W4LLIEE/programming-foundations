#include <stdio.h>

void addStd();
void listStd();
void exitProg();

typedef struct {int ID, grade; char name[20];} std;

typedef enum {add=1, list, exit}menu;

int main() {

    int intOpt;
    menu opts;
    std student;

    printf("\n\nStudent Records System\n");
    printf("______________________\n\n\n");

    while(1) {

        printf("Choose an option (1-3)\n\n");
        printf("_____________________\n\n");
        printf("1. Add new student\n2. List all students\n3. Exit program\n");
        printf("_____________________\n");
        scanf("%d", &intOpt);

        opts = intOpt;

        switch(opts) {
            case add:
                printf("\nadd();\n");
                break;
            case list:
                printf("\nlist();\n");
                break;
            case exit:
                printf("\nexit();\n");
                break;
            default:
                printf("\nInvalid Option. Please Try Again.\n");
        }
    }

    return 0;

}