#include <stdio.h>

int main() {
    int a[50], size, i, num, pos;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    if (size < 1 || size > 50) {
        printf("Invalid array size. Please enter a size between 1 and 50.\n");
        return 1;  // Exit the program with an error code.
    }

    printf("Enter elements of array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter data you want to insert: ");
    scanf("%d", &num);
    printf("Enter position (1 to %d): ", size + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > size + 1) {
        printf("Invalid position. The position should be between 1 and %d.\n", size + 1);
        return 1;  // Exit the program with an error code.
    }

    // Shift elements to make room for the new element
    for (i = size - 1; i >= pos - 1; i--) {
        a[i + 1] = a[i];
    }
    a[pos - 1] = num;
    size++;

    printf("Elements in array are: ");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
