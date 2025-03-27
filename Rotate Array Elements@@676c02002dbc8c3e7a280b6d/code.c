#include <stdio.h>
void reverse(int arr[], int i, int j){
    while(i<j){
        int temp = arr[i];
        arr[i] = arr [j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
}
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d ", &arr[i]);
    }
    int K;
    scanf("%d", &K);
    K = K%N;
    reverse(arr, 0, N-1);
    reverse(arr, 0, K-1);
    reverse(arr, K, N-1);
    for(int i=0; i<N i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}