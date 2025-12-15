#include <stdio.h>
int main() {
    int a, b;
    printf("Enter 1st num: ");
    scanf("%d", &a);
    printf("Enter 2nd num : ");
    scanf("%d", &b);
    int result = a + (~b + 1);
    printf(" difference of two num is : %d", result);
    return 0;
}
