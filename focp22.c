#include <stdio.h>

int main() {
    int num1, num2, gcd, smallest;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    gcd = 1;

    if (num1 < num2)
        smallest = num1;
    else
        smallest = num2;

    for (int i = 1; i <= smallest; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    printf("HCF = %d", gcd);

    return 0;
}
