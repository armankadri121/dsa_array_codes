#include <stdio.h>

int main() {
    int a[] = {4, 5, 6, 2, 3, 8, 1};
    int n = sizeof(a) / sizeof(a[0]);
    int i, j, temp;

    for (i = 1; i < n; i++) {
        temp = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = temp;
    }

    printf("Your sorted array is:");
    for (i = 0; i < n; i++) {
        printf(" %d", a[i]);
    }
    printf("\n");

    return 0;
}
