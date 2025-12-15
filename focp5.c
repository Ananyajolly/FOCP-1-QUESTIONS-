#include<stdio.h>
int main() {
    int a, b;
    printf("enter a \n enter b \n");
    scanf("%d%d", &a, &b);
    if (a > 0 && b > 0) {
        printf("a and b are in 1 quadrant ");
    }
    else if (a > 0 && b < 0) {
        printf("a and b is in 4 quadrant");
    }
    else if (a < 0 && b > 0) {
        printf("a and b is in 2 quadrant ");
    }
    else if (a < 0 && b < 0) {
        printf("a and b is in 3 quadrant ");
    }
    else {
        printf("a and b is at origin");
    }
    return 0;
}
