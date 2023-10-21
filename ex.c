#include <stdio.h>

int BinarySearch(int a[], int n, int data); // Function declaration

int main() {
    int a[] = {5, 9, 17, 23, 25, 45, 59, 63, 71, 89};
    int n = 10;
    int data;
    int result;

    printf("Enter the element you want to search: ");
    scanf("%d", &data);

    result = BinarySearch(a, n, data);

    if (result == -1) {
        printf("Element not found.\n");
    } else {
        printf("Element found at index %d.\n", result);
    }

    return 0;
}

int BinarySearch(int a[], int n, int data) {
    int l = 0, r = n - 1;
    
    while (l <= r) { // Use <= to include the comparison element
        int mid = l + (r - l) / 2; // Calculate the middle index to avoid overflow
        
        if (a[mid] == data) {
            return mid;
        } else if (a[mid] < data) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    
    return -1; // Return -1 if the element is not found
}
