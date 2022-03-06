#include <stdio.h>

int main(void) {
    int no;
    scanf("%d", &no);

    switch (no) {
    case 1:
    case 2:
    case 3:
        printf("あ");
        break;
    case 4:
    case 5:
        printf("い");
        break;
    case 6:
        printf("う");
        break;
    default:
        printf("aaa");
        break;
    }

    return 0;
}
