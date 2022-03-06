#include <stdio.h>

int sum(int, int);

int main(void) {
    printf("%d\n", sum(50, 100));
    return 0;
}

int sum(int min, int max) {
    int total;
    total = (min + max) * (max - min + 1) / 2;
    return total;
}
