#include <stdio.h>
int main() {
    for (int r = 1; r <= 5; r++) {
        int x = 0;
        for (int c = 1; c <= r; c++) {
            printf("%d", x);
            x = 1 - x;
        }
        int gap = 2 * (5 - r);
        for (int k = 1; k <= gap; k++) {
            printf(" ");
        }
        x = 0;
        for (int c = 1; c <= r; c++) {
            printf("%d", x);
            x = 1 - x;
        }
        printf("\n");
    }
    return 0;
}
