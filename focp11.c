#include<stdio.h>
int main() {
    int data[10] = {13,65,87,44,22,64,78,49,72,80};
    int e = 0, o = 0, evenArr[10], oddArr[10], idx;
    for (idx = 0; idx < 10; idx++) {
        if (data[idx] % 2 == 0) {
            evenArr[e] = data[idx];
            e++;
        } else {
            oddArr[o] = data[idx];
            o++;
        }
    }
    printf("\n even array values :\n");
    for (idx = 0; idx < e; idx++) {
        printf("\n even array = %d", evenArr[idx]);
    }
    printf("\n odd array values :\n");
    for (idx = 0; idx < o; idx++) {
        printf("\n odd arrays = %d", oddArr[idx]);
    }
    return 0;
}
