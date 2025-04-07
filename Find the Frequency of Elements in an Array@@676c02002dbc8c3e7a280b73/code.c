#include <stdio.h>

int main() {
    int n;

    // Input: number of elements
    scanf("%d", &n);

    int arr[n], freq[n];

    // Input: array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;  // Initialize frequency array
    }

    // Frequency calculation
    for(int i = 0; i < n; i++) {
        if(freq[i] != -1) continue;

        int count = 1;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // Mark as counted
            }
        }
        freq[i] = count;
    }

    // Output frequency of elements
    // printf("Element | Frequency\n");
    for(int i = 0; i < n; i++) {
        if(freq[i] != 0) {
            printf("%d       | %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}
