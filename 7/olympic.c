#include <stdio.h>

int main(void) {
    int year;
    printf("西暦を入力 : ");
    scanf("%d", &year);

    if (year < 1896)
        printf("オリンピックは1896年以降に開催されています\n");
    else if (year % 4 == 0)
        printf("夏のオリンピックが開催された\n");
    else if (year % 4 == 2)
        printf("冬のオリンピックが開催された\n");
    else
        printf("オリンピックは開催されてないよ\n");

    return 0;
}
