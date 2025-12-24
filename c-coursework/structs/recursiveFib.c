#include <stdio.h>

struct count {
    int cnt;
} counter;

int fib(int n, struct count *c) {

    c->cnt++;

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    if (n < 0) {
    printf("Please enter a non-negative number.\n");
    return 0;
}

    return fib(n - 1, c) + fib(n - 2, c);
}

int main() {

    int num;

    counter.cnt = 0;

    printf("How many iterations?\n");
    scanf("%d", &num);

    int result = fib(num, &counter);

    printf(
        "The %d iteration of fibonacci is %d. The function was called %d times.\n",
        num, result, counter.cnt
    );

    return 0;
}
