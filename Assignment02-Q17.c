#include <stdio.h>
#include <stdlib.h>
void print_array(const int arr[], int current_size) {
    printf("{");
    for (int i = 0; i < current_size; i++) {
        printf("%d", arr[i]);
        if (i < current_size - 1) {
            printf(", ");
        }
    }
    printf("}");
}

int delete_at_index(int arr[], int *current_size, int index) {
    int n = *current_size;
    if (n == 0 || index < 0 || index >= n) {
        printf("\nError: Invalid index (%d) or array is empty.\n", index);
        return 0;
    }
    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*current_size)--;
    return 1;
}
void delete_front(int arr[], int *current_size) {
    printf("\n\n--- Deleting from FRONT ---\n");
    printf("Array Before Deletion: ");
    print_array(arr, *current_size);
    delete_at_index(arr, current_size, 0);

    printf("\nArray After Deletion:  ");
    print_array(arr, *current_size);
}
void delete_middle(int arr[], int *current_size, int index) {
    printf("\n\n--- Deleting from MIDDLE (Index %d) ---\n", index);
    printf("Array Before Deletion: ");
    print_array(arr, *current_size);
    
    delete_at_index(arr, current_size, index);

    printf("\nArray After Deletion:  ");
    print_array(arr, *current_size);
}
void delete_end(int arr[], int *current_size) {
    printf("\n\n--- Deleting from END ---\n");
    printf("Array Before Deletion: ");
    print_array(arr, *current_size);
    
    // Deleting from the end means deleting the element at index (current_size - 1)
    delete_at_index(arr, current_size, *current_size - 1);

    printf("\nArray After Deletion:  ");
    print_array(arr, *current_size);
}


int main() {

    #define MAX_CAPACITY 10 
    
    int my_array[MAX_CAPACITY] = {10, 20, 30, 40, 50};
    int current_size = 5; 


    delete_front(my_array, &current_size); 
    delete_middle(my_array, &current_size, 1);
    delete_end(my_array, &current_size);
    
    printf("\n\n--- Final Array State ---\n");
    printf("Final Size: %d\n", current_size);
    printf("Final Array: ");
    print_array(my_array, current_size);
    printf("\n");

    return 0;
}