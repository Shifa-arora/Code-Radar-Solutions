#include <stdio.h>

// Function to toggle the nth bit of a number
unsigned int toggleNthBit(unsigned int num, int n) {
    return num ^ (1 << n);
}

int main() {
    unsigned int num;
    int n;
    
    // Input number and bit position
    printf("Enter a number: ");
    scanf("%u", &num);
    printf("Enter the bit position to toggle (0-based index): ");
    scanf("%d", &n);
    
    // Toggle the nth bit
    unsigned int result = toggleNthBit(num, n);
    
    // Display the result
    printf("Number after toggling %dth bit: %u\n", n, result);
    
    return 0;
}
