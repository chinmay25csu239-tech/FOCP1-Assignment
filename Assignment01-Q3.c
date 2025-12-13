#include <stdio.h>
int bitwise_add(int a, int b) {
    int carry;
    while (b != 0) {
        carry = a & b; 
        a = a ^ b; 
        b = carry << 1;
    }
    return a;
}
int subtract_bitwise(int a, int b) {
    int neg_b = bitwise_add(~b, 1);
    return bitwise_add(a, neg_b);
}

int main() {
    int num1 = 5;
    int num2 = 3;
    int result = subtract_bitwise(num1, num2);

    printf("%d - %d = %d\n", num1, num2, result);

    return 0;
}