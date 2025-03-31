#include <stdio.h>

// Function to toggle the nth bit
unsigned int toggleNthBit(unsigned int num, int n) {
    return num ^ (1 << n);
}

int main() {
    unsigned int num;
    int n;

    // Input from user
    // printf("Enter a number: ");
    scanf("%u", &num);
    
    // printf("Enter the bit position to toggle (0-based index): ");
    scanf("%d", &n);

    // Toggle the nth bit
    unsigned int result = toggleNthBit(num, n);

    // Display the result
    printf("%u\n", n, result);

    return 0;
}
