#include <stdio.h>
int main() {
    int limit, idx;
    int x = 0, y = 1, z;
    printf("\nEnter the number of terms: ");
    scanf("%d", &limit);
    printf("\nFibonacci Series: ");
    for (idx = 1; idx <= limit; idx++) {
        printf("%d ", x);
        z = x + y;
        x = y;
        y = z;
    }
    return 0;
}
