#include<stdio.h>
int main() {
    int marks[10] = {94,99,23,56,78,87,99,65,57,26};
    int key = 99, flag = 0;
    for (int idx = 0; idx < 10; idx++) {
        if (key == marks[idx]) {
            printf("Index: %d\n", idx);
            printf(" Position: %d\n", idx + 1);
            flag = 1;
        }
    }
    if (flag == 0) {
        printf("Score 99 not found in the list.\n");
    }
    return 0;
}
