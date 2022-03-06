#include <stdio.h>

int main(void) {
    int score;

    printf("点数を入力 :");
    scanf("%d", &score);

    if (score > 100) {
        printf("点数が100点より大きいです\n");
		score = 100;
	}

    printf("点数は%d点です\n", score);

    return 0;
}
