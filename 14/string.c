#include <stdio.h>
#include <string.h>

int main(void) {
    int len, i;
    char str1[256], str2[] = "AAA";
    scanf("%s", str1);

    if (strcmp(str1, str2) == 0) {
        printf("同じ\n");
    } else {
        printf("違う\n");
    }
}
