#include<stdio.h>
int main() {
    int nums[20] = {10, 23, 45, 52, 67, 98, 19, 61, 79, 39};
    int option, pos, val, size = 10, idx;
    printf("Array before insertion:\n");
    for (idx = 0; idx < size; idx++) {
        printf("%d ", nums[idx]);
    }
    printf("\n array insertion ? \n1 - Front\n2 - Middle\n3 - End\n");
    scanf("%d", &option);
    printf("\nEnter the element to insert: ");
    scanf("%d", &val);
    if (option == 1) {
        pos = 0;
    } else if (option == 2) {
        pos = size / 2;
    } else if (option == 3) {
        pos = size;
    } else {
        printf("\nInvalid input!");
        return 0;
    }
    for (idx = size; idx > pos; idx--) {
        nums[idx] = nums[idx - 1];
    }
    nums[pos] = val;
    size++;
    printf("Array after insertion:\n");
    for (idx = 0; idx < size; idx++) {
        printf("%d ", nums[idx]);
    }
    return 0;
}
