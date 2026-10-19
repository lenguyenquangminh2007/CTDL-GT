#include <stdio.h>
void in(int A[],int n){
    for(int i=0;i<n;i++){
        printf("%d ", A[i]);
    }
    printf ("\n");
}
void swap (int *a , int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
}
void partition(int A[], int first , int last , int n) {
    if(first>=last){ return;}
    int c=A[first];
    int i= first +1 ;
    int j=last;
    while(i<=j){
        while (A[i]<c && i<=j) i++;
        while (A[j]>c && i<=j) j--;
        if (i<j) {
            swap(&A[i], &A[j]);
            i++;
            j--;}
        }
    swap(&A[first], &A[j]);
    in(A,n);
    partition(A,first , j-1,n);
    partition(A, j+1, last,n);
}
void quicksort(int A[], int n){
    partition(A,0,n-1,n);
}
int main(){
int A[]= {101, 23, 57, 13, 25, 121, 87, 36, 13, 204, 111, 89, 59};
int n=13;
for (int i = 0; i < n; i++) {
    printf("%d ", A[i]); }
    printf("\n");
quicksort(A, n);
in(A, n);
return 0;
}
