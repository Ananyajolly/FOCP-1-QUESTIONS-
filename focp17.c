#include <stdio.h>
int main() {
    int nums[10] = {12, 34, 56, 76, 85, 93, 4, 76, 89, 73};
    int idx, option, pos, size = 10;
    printf("Array before deletion:\n");
    for (idx = 0; idx < size; idx++) {
        printf("%d ", nums[idx]);
    }
    printf("\n array deletion ? \n1 - Front\n2 - Middle\n3 - End\n");
    printf("Enter your choice: ");
    scanf("%d", &option);
    if (option == 1) {
        pos = 0;
    } else if (option == 2) {
        pos = size / 2;
    } else if (option == 3) {
        pos = size - 1;
    } else {
        printf("Invalid input!\n");
        return 0;
    }
    for (idx = pos; idx < size - 1; idx++) {
        nums[idx] = nums[idx + 1];
    }
    size--;
    printf("\nArray after deletion:\n");
    for (idx = 0; idx < size; idx++) {
        printf("%d ", nums[idx]);
    }
    return 0;
}
