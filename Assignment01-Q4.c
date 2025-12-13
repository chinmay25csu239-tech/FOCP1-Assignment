#include <stdio.h>
void swap_temp_variable(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swap_arithmetic(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
void swap_bitwise_xor(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
void swap_pointer_manipulation(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void print_values(int val1, int val2, const char *msg) {
    printf("%s: a = %d, b = %d\n", msg, val1, val2);
}
int main() {
    int a, b;
    a = 10; b = 50;
    printf("\n--- Method 1: Temporary Variable ---\n");
    print_values(a, b, "Before Swap");
    swap_temp_variable(&a, &b);
    print_values(a, b, "After Swap");
    a = 100; b = 25;
    printf("\n--- Method 2: Arithmetic ---\n");
    print_values(a, b, "Before Swap");
    swap_arithmetic(&a, &b);
    print_values(a, b, "After Swap");
    a = 33; b = 17;
    printf("\n--- Method 3: Bitwise XOR ---\n");
    print_values(a, b, "Before Swap");
    swap_bitwise_xor(&a, &b);
    print_values(a, b, "After Swap");
    a = 99; b = 1;
    printf("\n--- Method 4: Pointer Manipulation (Call by Reference) ---\n");
    print_values(a, b, "Before Swap");
    swap_pointer_manipulation(&a, &b);
    print_values(a, b, "After Swap");
    return 0;
}