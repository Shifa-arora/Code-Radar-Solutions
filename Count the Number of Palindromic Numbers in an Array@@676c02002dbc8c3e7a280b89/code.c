#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int num) {
    int original = num, reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    int n, count = 0;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (isPalindrome(arr[i])) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
