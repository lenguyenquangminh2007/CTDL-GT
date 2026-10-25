#include <stdio.h>


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void chiu(int A[], int n) {
    int left = 0;
    int right = n - 1;
    int mid = 0;
    
    while (mid <= right) {
        switch (A[mid]) {
            case 0:
                swap(&A[left], &A[mid]);
                left++;
                mid++;
                break;
            case 1: 
                mid++;
                break;
            case 2:
                swap(&A[mid], &A[right]);
                right--;
                break;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    int A[n]; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    
    chiu(A, n);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    
    return 0;
}