#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int T;
    scanf("%d", &T);
    int found = 0;  
    int allSame = 1; 
    for (int i = 1; i < N; i++) {
        if (arr[i] != arr[0]) {
            allSame = 0;
            break;
        }
    }
    if (allSame) {
        printf("0\n");
        return 0;
    }
    for (int i = 0; i < N; i++) {
        if (arr[i] == T) {
            printf("%d\n", i);
            found = 1;
        }
    }
    if (!found) {
        printf("-1\n");
    }
    return 0;
}
