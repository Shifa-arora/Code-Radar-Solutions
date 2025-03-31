#include <stdio.h>

// Function to convert decimal to binary using bitwise operators
void decimalToBinary(unsigned int num) {
    int binary[32]; // Array to store binary digits
    int i = 0;

    // Extract bits using bitwise operations
    while (num > 0) {
        binary[i] = num & 1;  // Get the last bit (LSB)
        num >>= 1;            // Right shift number by 1 bit
        i++;
    }

    // Print binary number in correct order
    printf("Binary representation: ");
    if (i == 0) {
        printf("0"); // Special case for input 0
    } else {
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
    }
    printf("\n");
}

int main() {
    unsigned int num;

    // Input from user
    // printf("Enter a decimal number: ");
    scanf("%u", &num);

    // Convert and display binary
    decimalToBinary(num);

    return 0;
}
