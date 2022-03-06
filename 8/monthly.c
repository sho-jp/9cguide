#include <stdio.h>

int main(void) {
    int month;

    printf("月を入力 :");
    scanf("%d", &month);

    switch (month) {
    case 1:
        printf("睦月\n");
        break;
    case 2:
        printf("如月\n");
        break;
    }
}
