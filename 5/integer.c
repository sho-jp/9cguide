#include <stdio.h>

int main(void) {
    int water = 198, milk = 138 * 2;
    printf("%d円\n", (int)(1000 - ((water + milk) * 1.05)));
    return 0;
}
