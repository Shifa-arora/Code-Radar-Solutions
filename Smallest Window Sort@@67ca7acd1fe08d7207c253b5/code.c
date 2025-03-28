int findUnsortedSubarray(int arr[], int n) {
    int left = 0, right = n - 1;

    // Find the first element from the left that is not in order
    while (left < n - 1 && arr[left] <= arr[left + 1]) {
        left++;
    }

    // If the entire array is sorted
    if (left == n - 1) return 0;

    // Find the first element from the right that is not in order
    while (right > 0 && arr[right] >= arr[right - 1]) {
        right--;
    }

    // Find the min and max in the unsorted subarray
    int min = arr[left], max = arr[left];
    for (int i = left; i <= right; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    // Expand the left boundary if needed
    while (left > 0 && arr[left - 1] > min) {
        left--;
    }

    // Expand the right boundary if needed
    while (right < n - 1 && arr[right + 1] < max) {
        right++;
    }

    return right - left + 1;
}
