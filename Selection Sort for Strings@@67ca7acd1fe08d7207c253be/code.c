#include <stdio.h>
#include <string.h>

// Function to perform Selection Sort on an array of strings
void selectionSort(char arr[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        // Find the minimum string in the remaining array
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[j], arr[minIndex]) < 0) {  // Compare strings
                minIndex = j;
            }
        }

        // Swap if a smaller string is found
        if (minIndex != i) {
            char temp[100];
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[minIndex]);
            strcpy(arr[minIndex], temp);
        }
    }
}

// Function to print the array of strings
void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}
