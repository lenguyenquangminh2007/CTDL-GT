#include <stdio.h>

void in(int A[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}

void MergeArrays(int A[], int first, int m, int last, int n){
    int i = first;
    int j = m + 1;
    int temp[last - first + 1];
    int k = 0;
    while(i <= m && j <= last){
        if(A[i] <= A[j]){
            temp[k++] = A[i++];
        } else {
            temp[k++] = A[j++];
        }
    }
    while(i <= m){
        temp[k++] = A[i++];
    }
    while(j <= last){
        temp[k++] = A[j++];
    }
    for(i = first, k = 0; i <= last; i++, k++){
        A[i] = temp[k];
    }
    in(A, n);
}

void Split_Merg(int A[], int first, int last, int n){
    if (first >= last) return;
    int m = (first + last) / 2;
    Split_Merg(A, first, m, n);
    Split_Merg(A, m + 1, last, n);
    MergeArrays(A, first, m, last, n);
}

void MergeSort(int A[], int N){
    if (N < 2) return;
    Split_Merg(A, 0, N - 1, N);
}

int main(){
    int A[] = {101, 23, 57, 13, 25, 121, 87, 36, 13, 204, 111, 89, 59};
    int n = 13;
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    MergeSort(A, n);
    in(A, n);
    return 0;
}