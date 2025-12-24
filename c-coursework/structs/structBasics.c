#include <stdio.h>

struct Student {
    int id;
    float gpa;
};

int main() {

    struct Student s1;
    struct Student s2;

    /* Assigning values using dot operator */
    s1.id = 101;
    s1.gpa = 3.45;

    /* Copying one structure to another */
    s2 = s1;

    printf("Student 1 ID: %d, GPA: %.2f\n", s1.id, s1.gpa);
    printf("Student 2 ID: %d, GPA: %.2f\n", s2.id, s2.gpa);

    return 0;
}
