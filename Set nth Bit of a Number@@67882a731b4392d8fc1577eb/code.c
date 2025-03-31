#include <stdio.h>

// Function to set the nth bit of a number
unsigned int setNthBit(unsigned int num, int n) {
    return num | (1 << n);
}

int main() {
    unsigned int num;
    int n;

    // Input from user
    // printf("Enter a number: ");
    scanf("%u", &num);
    
    // printf("Enter the bit position to set (0-based index): ");
    scanf("%d", &n);

    // Set the nth bit
    unsigned int result = setNthBit(num, n);

    // Display the result
    printf("%u\n", result);

    return 0;
}
