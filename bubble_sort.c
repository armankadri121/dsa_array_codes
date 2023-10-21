#include <stdio.h>

int main() {
    int a[] = {16, 13, 12, 17, 15, 11, 20, 25};
    // int n = sizeof(a) / sizeof(a[0]);
    int n=8;
    int i, j, flag, temp;

    for (i = 0; i < n - 1; i++) {
        flag = 0;
        for (j = 0; j < n - 1 - i; j++) {  // Fix the loop termination condition
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }

    printf("Your sorted array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
