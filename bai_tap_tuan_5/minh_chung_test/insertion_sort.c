#include <stdio.h>
void insertion_sort(int A[], int n){
    for (int i = 1; i < n; i++) {
        int tmp = A[i]; 
        int j = i - 1;
        while (j >= 0 && A[j] > tmp) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = tmp;
        for (int i = 0; i<n; i++) {
            printf("%d ", A[i]);
        }
        printf("\n");
    }
}
int main(){
    int A[]={101,23,57,13,25,121,87,36,13,204,111,89,59};
    int n=sizeof(A)/sizeof(A[0]);
    printf("");
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
    insertion_sort(A,n);
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
    return 0;
}
