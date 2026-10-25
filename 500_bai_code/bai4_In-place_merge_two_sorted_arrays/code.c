#include <stdio.h>
void merger(int A[], int m , int B[], int n) {
    int  temp;
    for(int i=0;i<m;i++){
        if(A[i] > B[0]){
            temp=A[i];
            A[i]=B[0];
            B[0]=temp;
            int first=B[0];
            int k;
            for(k=1; k<n && B[k]<first;k++){
                B[k-1]=B[k];
                
            }
            B[k-1]=first;
        }
    }
}
int main() {
    int m,n;
    scanf("%d %d",&m, &n);
    int A[m];
    int B[n];
    for(int i =0; i<m; i++){
        scanf("%d",&A[i]);
    }
    for (int i=0; i<n; i++) {
        scanf("%d", &B[i]);
    }
    merger(A,m,B,n);
    for (int i=0; i< m; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    for (int i=0; i< n; i++) {
        printf("%d ", B[i]);
    }
    
    return 0;
}
