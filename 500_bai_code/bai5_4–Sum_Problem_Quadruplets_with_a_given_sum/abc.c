#include <stdio.h>
void sum(int A[], int n , int target ){
int S=0;
for (int i = 0; i<n ;i++){
    S+=A[i];
    for (int j=i ; j<n; j++){
        S+=A[j];
        for (int k=j;k<n;k++){
            S+=A[k];
            for (int m=k;m<n;m++){
                S+=A[m];
            if(S==target){
                printf(" %d %d %d %d", A[i],A[j],A[k],A[m] );
            }
            }
        }
    }
}}
int main(){
    int target;
    scanf("%d", &target);
    int n;
    scanf ("%d",&n);
    int A[n];
    for (int i =0; i<n;i++){
        scanf("%d", &A[i]);
    }
    sum(A,n,target);
    return 0;
}