#include <stdio.h>
int main() {
    int idx;
    int data[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(data) / sizeof(data[0]);
    int temp = data[size - 1];
    for (idx = size - 1; idx > 0; idx--) {
        data[idx] = data[idx - 1];
    }
    data[0] = temp;
    printf("rotated array : ");
    for (idx = 0; idx < size; idx++) {
        printf("%d ", data[idx]);
    }
    return 0;
}
