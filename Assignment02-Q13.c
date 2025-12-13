#include <stdio.h>
#include <stdlib.h>
int find_peak_element_linear(const int arr[], int n) {
    // Case 1: Empty array
    if (n == 0) {
        printf("Error: Array is empty.\n");
        return -1; 
    }
    
    //  Case 2: Array with one element (it is always a peak)
    if (n == 1) {
        return arr[0];
    }
    

    if (arr[0] >= arr[1]) {
        return arr[0];
    }
    

    if (arr[n - 1] >= arr[n - 2]) {
        return arr[n - 1];
    }
    

    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            return arr[i];
        }
    }
    
    return -1; 
}

int main() {

    int arr1[] = {10, 20, 15, 2, 23, 90, 67};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int peak1 = find_peak_element_linear(arr1, n1);
    printf("Array: {10, 20, 15, 2, 23, 90, 67}\n");
    printf("Found Peak Element: %d\n\n", peak1);
    int arr2[] = {1, 2, 3, 4, 5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int peak2 = find_peak_element_linear(arr2, n2);
    printf("Array: {1, 2, 3, 4, 5}\n");
    printf("Found Peak Element: %d\n\n", peak2);
    int arr3[] = {10, 8, 8, 12, 12, 5};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int peak3 = find_peak_element_linear(arr3, n3);
    printf("Array: {10, 8, 8, 12, 12, 5}\n");
    printf("Found Peak Element: %d\n\n", peak3);
    
    return EXIT_SUCCESS;
}