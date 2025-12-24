#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    int id;
    struct Date birthDate;
};

/* Function using a structure pointer */
void updateYear(struct Student *s) {
    s->birthDate.year = 2005;
}

int main() {

    struct Student st;

    st.id = 202;
    st.birthDate.day = 15;
    st.birthDate.month = 6;
    st.birthDate.year = 2004;

    updateYear(&st);

    printf("ID: %d\n", st.id);
    printf("Birth Year: %d\n", st.birthDate.year);

    return 0;
}
