
#include <stdio.h>

int main() {
    int a[50], size, i, num;
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
    
    a[size] = num;
    size++;

    printf("Elements in array are: ");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
