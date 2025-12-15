#include<stdio.h>
int main() {
    int num, value;
    printf("enter binary number ");
    scanf("%d", &num);
    value = 0;
    int p = 1, d;
    while (num != 0) {
        d = num % 10;
        value = value + d * p;
        num = num / 10;
        p = p * 2;
    }
    printf("the decimal number is %d", value);
    return 0;
}
