#include <stdio.h>
#include <math.h>
int binaryToDecimal(long long n) {
    int decimalNumber = 0;
    int i = 0;
    int remainder;

    while (n != 0) {
        remainder = n % 10;
        n /= 10;
        decimalNumber += remainder * pow(2, i);
        
        i++;
    }
    return decimalNumber;
}
long long decimalToBinary(int n) {
    long long binaryNumber = 0;
    int remainder;
    long long i = 1;

    while (n != 0) {
        remainder = n % 2;
        n /= 2;
        binaryNumber += remainder * i;
        i *= 10;
    }
    return binaryNumber;
}


int main() {
    int choice;
    
    printf("--- Number System Conversion ---\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (choice == 1) {
        long long binary_input;
        printf("Enter a binary number: ");
        if (scanf("%lld", &binary_input) != 1) {
             printf("Invalid input.\n");
             return 1;
        }
        
        int decimal_output = binaryToDecimal(binary_input);
        printf("\nBinary (%lld) = Decimal (%d)\n", binary_input, decimal_output);
        
    } else if (choice == 2) {
        int decimal_input;
        printf("Enter a decimal number: ");
        if (scanf("%d", &decimal_input) != 1) {
             printf("Invalid input.\n");
             return 1;
        }
        
        long long binary_output = decimalToBinary(decimal_input);
        printf("\nDecimal (%d) = Binary (%lld)\n", decimal_input, binary_output);
        
    } else {
        printf("Invalid choice. Please run the program again and enter 1 or 2.\n");
    }

    return 0;
}