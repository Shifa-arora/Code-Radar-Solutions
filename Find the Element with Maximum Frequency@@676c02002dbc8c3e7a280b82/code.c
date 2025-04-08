#include <stdio.h>
#include <stdlib.h>

#define OFFSET 1000  // To handle negative values
#define SIZE 2001    // To cover range from -1000 to 1000

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int freq[SIZE] = {0}; // Frequency array with offset

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i] + OFFSET]++;
    }

    int maxFreq = 0;
    int result = 0;

    for (int i = 0; i < SIZE; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = i - OFFSET;
        } else if (freq[i] == maxFreq) {
            int candidate = i - OFFSET;
            if (candidate < result) {
                result = candidate;
            }
        }
    }

    printf("%d\n", result);
    return 0;
}
