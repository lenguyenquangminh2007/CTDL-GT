#include <stdio.h>

int tim(int A[], int n) {
    int result = 0;

    for (int i = 0; i < n; i++) {
        result ^= A[i];
    }

    for (int i = 1; i <= n - 1; i++) {
        result ^= i;
    }

    return result;
}

int main() {
   
    int A[] = { 1, 2, 3, 4, 2 };
    int n = sizeof(A) / sizeof(A[0]);

    printf("%d\n", tim(A, n));

    return 0;
}