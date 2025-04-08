#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime (without using sqrt)
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Function to count primes in the array
int countPrimes(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int primeCount = countPrimes(arr, n);
    printf("Number of prime numbers in the array: %d\n", primeCount);

    return 0;
}
