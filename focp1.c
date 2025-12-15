#include <stdio.h>
#include <math.h>

int main() {
    int no, sum = 0, rem, copy, digits = 0;

    printf("Enter the number: ");
    scanf("%d", &no);

    copy = no;

    int temp = no;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = no;
    while (temp > 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if (sum == copy)
        printf("Its an Armstrong number");
    else
        printf("Its not an Armstrong number");

    return 0;
}
