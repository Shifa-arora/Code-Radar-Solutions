#include <stdio.h>

#define MAX 100000

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int freq[MAX] = {0};  // Frequency array initialized to 0
    int maxVal = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }

    // Count frequencies
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int maxFreq = 0, result = MAX;
    for (int i = 0; i <= maxVal; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = i;
        } else if (freq[i] == maxFreq && i < result) {
            result = i;
        }
    }

    printf("%d\n", result);
    return 0;
}
