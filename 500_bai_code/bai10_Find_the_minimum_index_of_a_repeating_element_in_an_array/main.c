#include <stdio.h>

int findMinIndex(int A[], int n) {
    if (n <= 1) return -1;
    
    int max_val = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] > max_val) {
            max_val = A[i];
        }
    }
    
    
    int count[max_val + 1];
    for (int i = 0; i <= max_val; i++) {
        count[i] = 0;
    }
    
    int min_index = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (count[A[i]] > 0) {
            min_index = i;
        }
        count[A[i]]++;
    }
    
    return min_index;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int ans = findMinIndex(arr, n);
    if (ans != -1) {
        printf("%d\n", ans);
    } else {
        printf("lỗi\n");
    }
    
    return 0;
}