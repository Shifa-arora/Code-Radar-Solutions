#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int fi = arr[0];
    int arr[N] ;
    for(int i=0; i<N; i++){
        for(int i=0, int j=N-1; i<j; i++; j--){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        printf("%d ", arr[i]);
    }
}