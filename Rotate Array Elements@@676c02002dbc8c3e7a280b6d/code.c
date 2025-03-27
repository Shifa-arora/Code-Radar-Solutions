#include <stdio.h>
void reverse(int arr[], int i, int j){
    while(i<j){
        int temp = arr[i];
        arr[i] = arr [j];
        arr[j] = temp;
        i++;
        j--;
    }
    return ;
}
int main() {
    int N;
    scanf("%d", &N);
    int k;
    scanf("%d", &K);
    K = K%N;
    reverse(arr, 0, N-1);
    reverse(arr, 0, K-1);
    reverse(arr, k, N-1);
    for(int i=0; i<8; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}