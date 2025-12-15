#include<stdio.h>
int main() {
    int total = 0;
    int scores[20] = {98,70,97,70,93,91,95,70,98,89,78,70,68,86,43,72,85,80,90,70};
    for (int pos = 0; pos < 20; pos++) {
        if (scores[pos] == 70) {
            printf("\nstudent %d\n index %d", pos + 1, pos);
            total++;
        }
    }
    if (total == 0) {
        printf("No student scored 70.\n");
    } else {
        printf("\nTotal number of students who scored 70 = %d\n", total);
    }
    return 0;
}
