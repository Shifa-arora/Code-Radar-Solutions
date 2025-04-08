#include <stdio.h>

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    num = num < 0 ? -num : num; // Handle negative numbers
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], digitSum[n];
    

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        digitSum[i] = sumOfDigits(arr[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", digitSum[i]);
    }
    printf("\n");

    return 0;
}
