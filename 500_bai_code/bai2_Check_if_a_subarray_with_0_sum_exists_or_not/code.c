#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Không\n");
        return 0;
    }

    int A[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += A[j];
            if (sum == 0) {
                if (count == 0) {
                    printf("Mang con la:\n");
                }
                printf("{");
                for (int k = i; k <= j; k++) {
                    printf("%d", A[k]);
                    if (k < j) printf(",");
                }
                printf("}\n");
                count++;
            }
        }
    }

    if (count == 0) {
        printf("Không\n");
    }

    return 0;
}