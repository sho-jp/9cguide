#include <stdio.h>

int input();
int judge();

int main() {
    int value;
    value = input();
    judge(value);

    return 0;
}

int input() {
    int a;

    do {
        printf("年を入力 : ");
        scanf("%d", &a);
    } while (a < 2000);

    return a;
}

int judge(int year) {
    switch (year % 4) {
    case 0:
        printf("夏の大会！\n");
        break;
    case 2:
        printf("冬の大会！\n");
        break;
    default:
        printf("大会なんかやってないよ\n");
        break;
    }

    return 0;
}
