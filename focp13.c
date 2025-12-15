#include <stdio.h>
int main() {
    int pos = 0;
    int values[10] = {1, 11, 22, 14, 64, 99, 73, 32, 98, 70};
    int highest = values[0];
    for (int idx = 0; idx < 10; idx++) {
        if (values[idx] > highest) {
            highest = values[idx];
            pos = idx + 1;
        }
    }
    printf("The peak element is %d at index %d", highest, pos);
    return 0;
}
