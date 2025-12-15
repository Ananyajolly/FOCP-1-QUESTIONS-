#include <stdio.h>
int main() {
    int nums[10] = {2, 10, 10, 100, 2, 10, 11, 2, 11, 2};
    int i, j, cnt;
    int flag = 0;
    printf("Input array:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", nums[i]);
    }
    printf("\nDuplicate elements:\n");
    for (i = 0; i < 10; i++) {
        cnt = 1;
        if (nums[i] != -1) {
            for (j = i + 1; j < 10; j++) {
                if (nums[i] == nums[j]) {
                    cnt++;
                    nums[j] = -1;
                }
            }
            if (cnt > 1) {
                printf("%d ", nums[i]);
                flag = 1;
            }
        }
    }
    if (!flag) {
        printf("-1");
    }
    return 0;
}
