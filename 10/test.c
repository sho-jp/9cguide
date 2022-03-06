#include <stdio.h>

int main(void) {
    int score;

    do {
        printf("テストの点数は？ : ");
        scanf("%d", &score);
    } while (score < 0 || score > 100);

    printf("点数は%d\n", score);

    return 0;
}
