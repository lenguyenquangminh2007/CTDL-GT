#include <stdio.h>
int finding(int A[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result = result ^ arr[i]; 
    }

    return result; 
}
int main() {
    int arr[] = { 4, 3, 6, 2, 6, 4, 2, 3, 4, 3, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int odd_element = finding(arr, n);
    printf("%d\n", odd_element);
    return 0;
}