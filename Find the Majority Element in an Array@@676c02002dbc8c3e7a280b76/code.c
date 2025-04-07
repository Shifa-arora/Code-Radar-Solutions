#include <stdio.h>

// Function to find majority candidate
int findMajorityCandidate(int arr[], int n) {
    int count = 0, candidate = -1;

    // Phase 1: Find a potential candidate
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Phase 2: Verify if the candidate is majority
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate)
            count++;
    }

    if (count > n / 2)
        return candidate;
    else
        return -1;
}

int main() {
    int n;

    // Input: size of array
    scanf("%d", &n);
    int arr[n];

    // Input: array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print majority element
    int result = findMajorityCandidate(arr, n);
    printf("%d\n", result);

    return 0;
}
